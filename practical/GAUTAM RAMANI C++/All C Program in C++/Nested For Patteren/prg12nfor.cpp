#include<iostream>
using namespace std;
int main()
{
    char i,j,a=65;
    for(i=65;i<=69;i++)
    {
        a=i;
        for(j=65;j<=i;j++)

            {
                cout<<"\t"<<a;
                a--;
            }
        cout<<"\n";
    }
}