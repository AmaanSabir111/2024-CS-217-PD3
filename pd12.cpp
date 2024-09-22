#include<iostream>
using namespace std;
main(){

int meters,width,height,walls;
cout<<"Number of square meters you can paint:";
cin>>meters;
cout<<"Width of single wall (in meters):";
cin>>width;
cout<<"Height of single wall (in meters):";
cin>>height;
walls=meters/(width*height);
cout<<"Number of walls you can paint:"<<walls;





}