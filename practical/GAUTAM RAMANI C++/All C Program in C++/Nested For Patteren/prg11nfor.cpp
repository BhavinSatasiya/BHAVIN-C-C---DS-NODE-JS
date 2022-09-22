#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        
            if(a%2!=0)
            {
                cout<<"\t1";
                a++;
            }
            else
            {
                cout<<"\t0";
                a++;
            }
            
        cout<<"\n";
    }
}