#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void name();


main()
{
 system("cls");
 name();
}
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void name(){
  gotoxy(50,4);
  cout<<"I AM MUHAMMAD KAMRAN ";
}