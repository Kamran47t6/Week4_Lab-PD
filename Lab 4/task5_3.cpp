#include<iostream>
using namespace std;
void calculatebill(string day,int amount);
int main(){
string day;
int amount;
cout<<"Enter your shopping day :";
cin>>day;
cout<<"ENter total amount :";
cin>>amount;
calculatebill(day,amount);
}
void calculatebill(string day,int amount){
if(day=="sunday"){
   cout<<"Congratulations 10% discount :";
   cout<<"Your new net amount :"<<amount-(amount/100*10);
}
if(day!="sunday"){
   cout<<"Congratulations 5% discount :";
   cout<<"Your new net amount :"<<amount-(amount/100*5);
}
}



