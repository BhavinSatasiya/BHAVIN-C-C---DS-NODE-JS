#include<iostream>
using namespace std;
int main()
{
    int m,c,p,total,per;
    cout<<"Maths=";
    cin>>m;
    cout<<"Chemistry=";
    cin>>c;
    cout<<"Physics=";
    cin>>p;
    total=m+c+p;
    cout<<"\nTotal="<<total;
    per=total/3;
    cout<<"\nPercentage="<<per;
}