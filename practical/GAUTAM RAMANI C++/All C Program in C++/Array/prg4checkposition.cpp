#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,position=0;
    cout<<"Enter Element=";
    for(i=0;i<5;i++)
    cin>>a[i];
    cout<<"Enter the Position you want to Check=";
    cin>>n;
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        break;
        else
        position++;
    }
    cout<<" "<<n<<" at"<<" "<<++position<<" position";
}