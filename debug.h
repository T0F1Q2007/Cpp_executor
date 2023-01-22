#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
void show ()
{
    system("ls");
}
int loading(int start)
{
    string m=".";
    cout<<"\nUpdating...";
    for (int i=0;i<6;i++)
    {
        cout<<endl;
        cout<<m;
        m+=" .";
        sleep(0.1);
    }
    sleep(1);
    system("clear");
    return 0;
}
void loop()
{
    system("do");
    system("msg * Error");
    system("loop");
    system("messgae.bat");
    return;
}
int rengli(int start)
{
    string mesaj,A="A",B="B",C="C",D="D",E="E",F="F";
    string ol[6]={A,B,C,D,E,F};
    cout<<start<<endl;
    for (int a=0;a<10;a++)
    {
        mesaj="color "+a;
        system(mesaj.c_str());
    }
    for (int a=0;a<7;a++)
    {
        mesaj="color "+ol[a];
        system(mesaj.c_str());
    }
    sleep(2);
    return 0;
}
/*
int mesbox(int start)
{
	AllocConsole(); //other box buttons  MB_HELP| MB_CANCELTRYCONTINUE | MB_ICONHAND |
	if (MessageBox(FindWindowA("ConsoleWindowClass", NULL), "Working on it...", "App creating...", MB_ICONHAND | MB_DEFBUTTON2 | MB_SYSTEMMODAL) == IDCANCEL)
    return 0;
}
*/
//////////
int login(int start)
{
    string yaz;
    cout<<start<<endl;
	cout<<"Loaction"<<endl;
	system("pwd");
	cout<<"To Desktop"<<endl;
	system("cd C:/Users/user/Desktop/");
	system("pwd");
	cout<<"Type :";
	cin>>yaz;
	if (yaz=="loop") {loop();}
    else if (yaz=="rengli") {rengli(0);}
    return 0;
}