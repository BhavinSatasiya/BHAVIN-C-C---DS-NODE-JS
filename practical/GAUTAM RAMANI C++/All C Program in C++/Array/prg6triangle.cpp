#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j,utri=0,diago=0,ltri=0;
    cout<<"Element of Matrix a is\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            utri+=a[i][j];
            if(i==j)
            diago+=a[i][j];
            if(i>j)
            ltri+=a[i][j];
        }
    }
        cout<<"\nSum Utri="<<utri;
        cout<<"\nSum diago="<<diago;
        cout<<"\nSum ltri="<<ltri;
}