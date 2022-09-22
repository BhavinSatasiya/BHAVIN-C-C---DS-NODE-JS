#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    test(int i)
    {
        cout<<"\nConstructor called..."<<i;
        n=i;
    }
    ~test()
    {
        cout<<"\nDestructor called..."<<n;
    }
};
int main()
{
    test t1(1),t3(3),t2(2);
}