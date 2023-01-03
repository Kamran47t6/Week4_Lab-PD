#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2);
int main(){
string name;
float matricMarks,interMarks,ecatMarks,ecatMarksStd1,ecatMarksStd2;
string nameStd1,nameStd2;
cout<<"ENter your name :";
cin>>name;
nameStd1=name;
cout<<"Enter matric marks :";
cin>>matricMarks;
cout<<"Enter inter marks :";
cin>>interMarks;
cout<<"Enter ecat marks :";
cin>>ecatMarks;
ecatMarksStd1=ecatMarks;
calculateAggregate(name,matricMarks,interMarks,ecatMarks);
cout<<"ENter your name :";
cin>>name;
nameStd2=name;
cout<<endl;
cout<<"Enter matric marks :";
cin>>matricMarks;
cout<<"Enter inter marks :";
cin>>interMarks;
cout<<"Enter ecat marks :";
cin>>ecatMarks;
ecatMarksStd2=ecatMarks;
calculateAggregate(name,matricMarks,interMarks,ecatMarks);
printMenu();
compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
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
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks){
   float aggregate=(matricMarks/1100)*30+(interMarks/550)*30+(ecatMarks/400)*40;
   cout<<"Total Aggregate :"<<aggregate<<endl;
}
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2){
   if(ecatMarksStd1>ecatMarksStd2){
        cout<<"Student 1 RollNo :"<<"1";
}
   if(ecatMarksStd1<ecatMarksStd2){
        cout<<"Student 2 RollNo :"<<"1";
}
}


