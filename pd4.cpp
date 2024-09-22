#include<iostream>
using namespace std;
main(){
float i,p,chances;
cout<<"Enter imposter count:";
cin>>i;
cout<<"Enter player count:";
cin>>p;
chances=(100)*(i/p);
cout<<"Chance of being an impostor:"<<chances<<"%";

}