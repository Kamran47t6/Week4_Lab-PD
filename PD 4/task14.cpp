#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks);
void compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
int main(){
string name;
int matricMarks,interMarks,ecatMarks;
cout<<"ENter your name :";
cin>>name;
cout<<"Enter matric marks :";
cin>>matrcMarks;
cout<<"Enter inter marks :";
cin>>interMarks;
cout<<"Enter ecat marks :";
cin>>ecatMarks;
}
void printMenu(){
cout<<"#############################################"<<endl;
cout<<"#   ####################################    #"<<endl;
cout<<"#           ##################              #"<<endl;
cout<<"#   UNIVERSITY ADMISSION MANAGEMENT SYSTEM  #"<<endl;
cout<<"#                                           #"<<endl;
cout<<"#                                           #"<<endl;
cout<<"#                                           #"<<endl;
cout<<"#############################################"<<endl;
}
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks){
   float aggregate=(matricMarks/100)*30+(interMarks/100)*30+(ecatMarks/100)*40;
   cout<<"Total Aggregate :"<<aggregate;
}

