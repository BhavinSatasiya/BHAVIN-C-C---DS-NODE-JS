#include<iostream>
using namespace std;
class test
{
    //by default Private
    int x=20;
    public:
    int a=10,b,y;
};
int main()
{
    test t1;
    cout<<"\na:"<<t1.a;
//  cout<<"\ny:"<<t1.x;   //Error--(due to the private)
}
