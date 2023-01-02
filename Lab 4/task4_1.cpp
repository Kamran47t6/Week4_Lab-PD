#include<iostream>
using namespace std;
void number(int num);
int main(){
int num;
cout<<"Enter a number :";
cin>>num;
number(num);
}
void number(int num){
   cout<<"Number you enter :"<<num;
}