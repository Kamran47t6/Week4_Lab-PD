#include<iostream>
using namespace std;
void vote(int age);
int main(){
 int age;
while(true){
 cout<<"ENter your age :";
 cin>>age;
 vote(age);
}
}
void vote(int age){
   if(age>= 18){
      cout<<"You are eligible :";
  }
   if(age<18){
      cout<<"You are not eligible: ";
  }
}