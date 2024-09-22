#include<iostream>
using namespace std;
main(){
string name;
int at,ct,ats,cts,donation,tag,dtc,remaining;
cout<<"Enter the movie name:";
cin>>name;
cout<<"Enter the adult ticket price:$";
cin>>at;
cout<<"Enter the child ticket price:$";
cin>>ct;
cout<<"Enter the number of adult tickets sold:";
cin>>ats;
cout<<"Enter the number of child tickets sold:";
cin>>cts;
cout<<"Enter the percentage of amount to be donated to charity:";
cin>>donation;
tag=(ats*20)+(cts*10);
dtc=tag/donation;
remaining=tag-dtc;
cout<<"Total amount generated from ticket sales:$"<<tag<<endl;
cout<<"Donation to charity:$"<<dtc<<endl;
cout<<"Remaining amount after donation:$"<<remaining;



}