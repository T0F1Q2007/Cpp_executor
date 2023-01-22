#include <iostream>
#include <string>
#include "debug.h" //debug console, sleep
using namespace std;

int main()
{
    string file,afile;
    system("clear");
    //cout<<"v2.3"<<endl;
    cout<<"Public v1.0"<<endl;
    system("pwd");
    cout<<"File location is marked above"<<endl;
    cout<<"Enter file name: ";
    cin>>afile;
    cout<<endl;
    system("clear");
    if (afile=="update" || afile=="1") {loading(0);afile="cpp_executor";}
    else if (afile=="debug" || afile=="0") {login(0);}
    else {system("cd C:/Users/user/Desktop/");}
    file = "g++ "+afile+".cpp -o "+afile+" -time";
    system("clear");
    cout<<endl;
    system(file.c_str());
    system("pwd");
    cout<<endl;
    sleep(2);
    return 0;
}