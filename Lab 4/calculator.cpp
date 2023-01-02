#include<iostream>
using namespace std;
void add(int number1,int number2);
void mul(int number1,int number2);
void div(int number1,int number2);
void sub(int number1,int number2);
int main(){
int number1,number2;
char operation;
cout<<"Enter number 1:";
cin>>number1;
cout<<"Enter number 2:";
cin>>number2;
cout<<"Enter operation (+,*,/,-):";
cin>>operation;
if(operation=='+'){
  add(number1,number2);
}
if(operation=='*'){
  mul(number1,number2);
}
if(operation=='/'){ 
  div(number1,number2);
}
if(operation=='-'){
  sub(number1,number2);
}
}
void add(int number1,int number2){
  cout<<"Sum is :"<<number1+number2;
}
void mul(int number1,int number2){
  cout<<"Multiplication is :"<<number1*number2;
}
void div(int number1,int number2){
  cout<<"Sum is :"<<number1/number2;
}
void sub(int number1,int number2){
  cout<<"Subtraction is :"<<number1-number2;
}
