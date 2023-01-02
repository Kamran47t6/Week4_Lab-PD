#include<iostream>
using namespace std;
void display(int number);
int main(){
int number;
cout<<"ENter a number :";
cin>>number;
display(number);
}
void display(int number){
 if(number>=50){
   cout<<"PAss !!";
}
 if(number<50){
   cout<<"Fail !!";
 }
}