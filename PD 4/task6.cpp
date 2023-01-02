#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void nameA();
void nameW();
void nameAA();
void nameI();
void nameS();
main()
{
 system("cls");
 nameA();
 nameW();
 nameAA();
 nameI();
 nameS();
}
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void nameA(){
  gotoxy(8,5);
  cout<<" A ";
}
void nameW(){
 gotoxy(8,6);
   cout<<" W ";
}
void nameAA(){
 gotoxy(8,7);
 cout<<" A ";
}
void nameI(){
   gotoxy(8,8);
   cout<<" I ";
}
void nameS(){
  gotoxy(8,9);
   cout<<" S ";
}

