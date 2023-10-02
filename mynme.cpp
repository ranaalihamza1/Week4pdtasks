#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printYourName();
main()
{
 system("cls");
 printYourName();
 
}
void printYourName()
{
 gotoxy(15,17);
 cout<<"Esa";
 gotoxy(0,20); 
}
void gotoxy (int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

