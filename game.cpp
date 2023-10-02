#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void moveplayer (int x,int y);
main()
{
 int x = 7  , y = 1;
 system ("cls");
 printMaze();
 while(true)
 {
      y=y+1;
 gotoxy(x,y) ;
 cout<<"*";
 Sleep(400);
 gotoxy (x,y);
 cout <<" ";
 gotoxy (0,10); 
 if(y==7)
 {
 	x=7,y=1;
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
