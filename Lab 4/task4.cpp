#include<iostream>
using namespace std;
void result(int number);
int main(){
int number;
while(true){
cout<<"Enter number :";
cin>>number;
result(number);
}
}
void result(int number){
   if(number%2==0){
      cout<<"Even Number !!!";
}
   if(number%2!=0){
      cout<<"Odd Number !!!";
}
}