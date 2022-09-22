#include<iostream>
using namespace std;
int main()
{
    int a,c,d;
    cout<<"a=";
    cin>>a;
    if(a<100)
		{
			c=a*.60+50;
			cout<<"Electricity Bill is "<<c;
		}
	else if(a>100&&a<300)
		{
			c=(a-100)*.80+60+50;
			cout<<"Electricity Bill is "<<c;
		}
	else if(a>300)
		{
			c=(a-300)*.90+60+160+50;
			cout<<"Electricity Bill is "<<c;
		}
	if (c>300)
		{
			d=c*.15;
			cout<<"\nSurcharge is "<<d;
			cout<<"\nTotal Electricity Bill is "<<c+d;
		}
}