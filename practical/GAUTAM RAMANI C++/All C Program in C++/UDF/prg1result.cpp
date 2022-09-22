#include<iostream>
using namespace std;
int main()
{
    void dosub();
    dosub();
}
void dosub()
{
    void docal(int,int,int);
    int m,c,p;
    char a[20];
    cout<<" Enter Name:";
    cin>>a;
    cout<<"Maths= \nChemistry= \nPhysics=";
    cin>>m>>c>>p;
    void docal(int,int,int);
    docal(m,c,p);
}
void docal(int m,int c,int p)
{
    int total;
    float per;
    total=m+c+p;
    cout<<"\nTotal="<<total;
    if(m<34||c<34||p<34)
        cout<<"Fail";
    else
    {
        per=total/3;
        cout<<"\nPercentage="<<per;
        if(per>=75&&per<=100)
        cout<<"\nA Grade";
        else if(per>=60&&per<=75)
        cout<<"\nB Grade";
        else if(per>=45&&per<=60)
        cout<<"\nC Grade";
        else if(per>=35&&per<=45)
        cout<<"\nD Grade";
        else if(per>=0&&per<=35)
        cout<<"\nTry Again";

    }
}