#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void moveplayer (int x,int y);
main()
{
 int x = 3  , y = 4;
 system ("cls");
 printMaze();
 while(true)
 {
      x=x+1;
 gotoxy(x,y) ;
 cout<<"*";
 Sleep(400);
 gotoxy (x,y);
 cout <<" ";
 gotoxy (0,10); 
 if(x==10)
 {
 	x=3,y=4;
 }

}
}
void gotoxy(int x,int y)
{
COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
void printMaze()
{
 cout << "#######################" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#######################" << endl;
}
