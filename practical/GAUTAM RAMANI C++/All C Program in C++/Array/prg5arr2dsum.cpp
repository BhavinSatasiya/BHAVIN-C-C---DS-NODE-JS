#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j,b[5][5],c[i][j];
    cout<<"Element of Matrix a is\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Element of Matrix b is\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Sum of Matrix is\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<c[i][j];
        }
        cout<<"\n";
    }
}