#include<iostream>
using namespace std;
int main()
{
    float i,n,a=0.5;
    cout<<"N=";
    cin>>n;
    for(i=0.5;i<n;i++)
    {
        cout<<"  "<<a;
        a=a+i;
    }
}