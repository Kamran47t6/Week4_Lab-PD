#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMaze();
void playermove(int x,int y);
main()
{
  system("cls");
   printMaze();
   int x=3,y=3;
while(true){ 
   playermove(x,y);
   if(y<8){
      y=y+1;
}
if(y==8){
     gotoxy(x,y-1);
     cout<<" ";
     y=3;

}
}
}
 void printMaze(){
   cout<<"####################"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl; 
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"####################"<<endl;
}
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playermove(int x,int y){
  gotoxy(3,4);
  cout<<"P";
  gotoxy(3,5);
  cout<<"P";
  gotoxy(3,6);
  cout<<"P";
  gotoxy(3,7);
  cout<<"P";
}
