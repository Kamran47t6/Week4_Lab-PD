#include<iostream>
using namespace std;
void airline(string countryname,float ticketp);
int main(){
  string countryname;
float ticketp;
int finalprice;
while(true){

cout<<"Enter country name in CAPITAL letters:";
cin>>countryname;
cout<<"ENter ticket price in Dollars :";
cin>>ticketp;
airline(countryname,ticketp);
}
}
void airline(string countryname,float ticketp){
  float finalprice;
  if(countryname=="PAKISTAN"){
    finalprice=ticketp-(ticketp/100)*5;
    cout<<"Ticket Price after discount :"<< finalprice;
}
if(countryname=="IRELAND"){
    finalprice=ticketp-(ticketp/100)*10;
    cout<<"Ticket Price after discount :"<< finalprice;
}
if(countryname=="INDIA"){
    finalprice=ticketp-(ticketp/100)*20;
    cout<<"Ticket Price after discount :"<< finalprice;
}
if(countryname=="ENGLAND"){
    finalprice=ticketp-(ticketp/100)*30;
    cout<<"Ticket Price after discount :"<< finalprice;
}
if(countryname=="CANADA"){
    finalprice=ticketp-(ticketp/100)*45;
    cout<<"Ticket Price after discount :"<< finalprice;
}
}
