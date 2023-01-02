#include<iostream>
using namespace std;
void Reverse(string a);
int main(){
 string a;
cout<<"Enter 'true' or 'false' :";
cin>>a;
Reverse(a);
}
void Reverse(string a){
  if(a=="true"){
  cout<<"False ";
}
if(a!="true"){
  cout<<"True ";
}
}