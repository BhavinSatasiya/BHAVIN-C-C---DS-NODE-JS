#include<iostream>
using namespace std;
int main()
{
    int a[10],i,odd=0,even=0;
    cout<<"Enter Element=";
    for(i=0;i<5;i++)
    cin>>a[i];
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        odd+=a[i];
        else
        even+=a[i];
    }
    cout<<"\nSum of Odd element="<<odd;
    cout<<"\nSum of Even Element="<<even;
}