#include<iostream>
using namespace std;
main(){
int size,cost,area,cpp,cpf;
cout<<"Enter the size of fertilizer in pounds:";
cin>>size;
cout<<"Enter the cost of the bag:$";
cin>>cost;
cout<<"Enter the area in sqyare feet that can be covered by the bag:";
cin>>area;
cpp=cost/size;
cpf=cost/area;
cout<<"Cost of fertilizer per pound:"<<"$"<<cpp<<endl;
cout<<"Cost of fertilizing per square foot:"<<"$"<<cpf;

}