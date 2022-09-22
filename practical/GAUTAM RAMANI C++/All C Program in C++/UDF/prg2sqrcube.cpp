#include<iostream>
using namespace std;
int main()
{
    int sqr(int);
    int cube(int);
    int a;
    cout<<"a=";
    cin>>a;
    cout<<"\nSqr="<<sqr(a);
    cout<<"\nCube="<<cube(a);
}
int sqr(int a)
{
    return a*a;
}
int cube(int a)
{
    return a*a*a;
}