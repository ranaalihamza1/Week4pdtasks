#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printH();
void printA();
void printS();
void printN();
main()
{
 system("cls");
 printH();
 printA();
 printS();
 printN();
 gotoxy(0,25);
}
void printH()
{
 gotoxy(115,17);
 cout<<"H";
 Sleep(500); 
}

void printA()
{
 gotoxy(115,18);
 cout<<"A";
 Sleep(500);
 gotoxy(115,21);
 cout<<"A";
 Sleep(500); 
}

void printS()
{
 gotoxy(115,19);
 cout<<"S";
 Sleep(500);
 gotoxy(115,20);
 cout<<"S";
 Sleep(500);
 
}
 void printN()
{
 gotoxy(115,22);
 cout<<"N"; 
}
void gotoxy (int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

