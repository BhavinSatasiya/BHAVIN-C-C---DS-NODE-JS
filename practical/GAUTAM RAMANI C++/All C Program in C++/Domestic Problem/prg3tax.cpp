#include<iostream>
using namespace std;
int main()
{
    int a,tax;
    cout<<"a=";
    cin>>a;
    if (a>=0&&a<=2500)
	{
		cout<<"Tax is 0";
	}
	else if (a>=2500&&a<=5000)
	{
		tax=(a-2500)*.10;
        cout<<"Tax="<<tax;
	}
	else if (a>5000&&a<=10000)
	{
		tax=(a-5000)*.20+250;
		cout<<"Tax="<<tax;
	}
	else if (a>10000)
    {
		tax=(a-10000)*.30+250+1000;
		cout<<"Tax="<<tax;
    }
}