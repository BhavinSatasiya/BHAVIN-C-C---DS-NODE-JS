#include<iostream>
using namespace std;
int main()
{
    char i,j,a=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<a++;
        }
        cout<<"\n";
    }
}