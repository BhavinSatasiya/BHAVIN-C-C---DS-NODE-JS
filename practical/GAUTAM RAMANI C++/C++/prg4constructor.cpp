#include<iostream>
using namespace std;
class test
{
    public:
    test()                                 //constructor will call the automatically
    {
        cout<<"\nConstructor Called...";
    }
};
int main()
{
    test t1,t2,t3;
}