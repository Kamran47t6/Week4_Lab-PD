#include<iostream>
using namespace std;
void maximum(int number1,int number2);
void minimum(int number1,int number2);
void isequal(int number1,int number2);
int main(){
int number1,number2,choise;
 while(true){
  cout<<"Enter number 1:";
  cin>>number1;
  cout<<"Enter number 2:";
  cin>>number2;
  cout<<"ENter your choise (1-3) :";
  cin>>choise;
  minimum(number1,number2);
  maximum(number1,number2);
  isequal(number1,number2);
  }
}
if(choise =='1'){ 
  void maxmum(int number1,int number2){
   if (number1>number2){
    cout<<"The maximum number is :"<<number1;
}
   if(number1<number2){
    cout<<"The maximum number is :"<<number2;
}
}}
if(choise ==2){ 
void minimum(int number1,int number2){
   if (number1<number2){
    cout<<"The minimum number is :"<<number1;
}
   if(number1>number2){
    cout<<"The minimum number is :"<<number2;
}
}}
if(choise ==3){ 
void isequal(int number1,int number2){
   if (number1==number2){
    cout<<"The numbers are equal :";
}
   if(number1!=number2){
    cout<<"The numbers are not equal :";
}
}}


