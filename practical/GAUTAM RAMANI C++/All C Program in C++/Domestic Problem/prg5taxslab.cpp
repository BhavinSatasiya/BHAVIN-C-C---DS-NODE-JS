#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a=";
    cin>>a;
    if (a<5000)
		{
			b=a*.28+a;
			cout<<"Gross Salery= "<<b;
		}
	else if (a>5000&&a<10000)
		{
			b=a*.42+a;
			cout<<"Gross Salery= "<<b;
		}
	else if (a>10000&&a<15000)
		{
			b=a*.55+a;
			cout<<"Gross Salery= "<<b;
		}
	else if (a>15000)
		{
			b=a*.70+a;
			cout<<"Gross Salery= "<<b;;
		}
}