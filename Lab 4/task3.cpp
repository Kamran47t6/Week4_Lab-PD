#include<iostream>
using namespace std;
void result(int marks);
int main(){
int marks;
cout<<"ENter marks :";
cin>>marks;
result(marks);
}
void result(int marks){
   cout<<"Your Marks :"<<marks;
}