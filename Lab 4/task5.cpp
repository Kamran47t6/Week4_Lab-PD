#include<iostream>
using namespace std;
void maximum(int number1,int number2);
int main(){
int number1,number2;
 while(true){
  cout<<"Enter number 1:";
  cin>>number1;
  cout<<"Enter number 2:";
  cin>>number2;
  maximum(number1,number2);
  }
}
void maximum(int number1,int number2){
if (number1>number2){
   cout<<"The greater number is :"<<number1;
}
if(number1<number2){
   cout<<"The greater number is :"<<number2;
}
}

