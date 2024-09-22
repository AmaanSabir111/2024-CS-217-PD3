#include<iostream>
using namespace std;
main(){

float vegprice,fruitprice,vegquan,fruitquan,total;
cout<<"Enter vegetable price per kilogram(in coins):";
cin>>vegprice;
cout<<"Enter fruit price per kilogram(in coins):";
cin>>fruitprice;
cout<<"Enter total kilograms of vegetable:";
cin>>vegquan;
cout<<"Enter total kilograms of fruits:";
cin>>fruitquan;
total=((vegprice*vegquan)+(fruitprice*fruitquan))/1.94;
cout<<"Total earnings in Rupees(Rps):"<<total;

}