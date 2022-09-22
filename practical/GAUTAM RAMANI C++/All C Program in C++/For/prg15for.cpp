#include<iostream>
using namespace std;
int main()
{
    char i,n;
    cout<<"N=";
    cin>>n;
    for(i=65;i<=n;i+=2)
    {
        cout<<"  "<<i;
    }
}