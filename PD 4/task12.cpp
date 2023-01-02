#include<iostream>
using namespace std;
void flower(float price,int red,int white,int tulip);
int main(){
float price;
int red,white,tulip;
cout<<"ENter number of flowers (first red,second white,third tulip):";
cin>>red>>white>>tulip;
price=red*2+white*4.10+tulip*2.50;
cout<<"Total number of flowers :"<<red+white+tulip;
cout<<endl;
flower(price,red,white,tulip);
}
void flower(float price,int red,int white,int tulip){
  if(price>200){
   cout<<"Total price :"<<price;
   cout<<"Final price after discount :"<<price-(price/100)*20;
}
if(price<=200){
   cout<<"Total price :"<<price;
}
}
  