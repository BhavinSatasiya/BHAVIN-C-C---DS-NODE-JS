#include<iostream>
using namespace std;
int main()
{
    char a=65;
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        
            if(j%2!=0)
            {
                cout<<"\t"<<(char)(a+32);
                a++;
            }
            else
            {
                cout<<"\t"<<a;
                a++;
            }
            
        cout<<"\n";
    }
}