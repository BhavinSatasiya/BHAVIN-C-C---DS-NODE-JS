#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"\nBase Class Constructor Called";
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"\nDerived Class Constructor Called";
    }
};
int main()
{
    derived d;
}