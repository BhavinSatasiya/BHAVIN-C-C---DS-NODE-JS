#include<iostream>
using namespace std;
int main()
{
    int i,a[10],sum=0;
    cout<<"Enter Element=";
    for(i=0;i<5;i++)
    cin>>a[i];
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    cout<<"\nSum="<<sum;
}