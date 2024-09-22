#include<iostream>
using namespace std;
main(){
string name;
int wl,days;
cout<<"Enter the name of the person:";
cin>>name;
cout<<"Enter the target weight loss in kilograms:";
cin>>wl;
days=wl*15;
cout<<name<<"will need"<<days<<"days to lose"<<wl<<"weight by following the doctor's suggestion";

}