#include<iostream>
using namespace std;
void Carchallan(int speed);
int main(){
 int speed;
cout<<"Enter the speed of Car :";
cin>>speed;
Carchallan(speed);
}
void Carchallan(int speed){
  if(speed>100){
  cout<<"Halt.... You will be challaned !!!";
}
if(speed<=100){
   cout<<"Perfect ! You are going good :";
}
}