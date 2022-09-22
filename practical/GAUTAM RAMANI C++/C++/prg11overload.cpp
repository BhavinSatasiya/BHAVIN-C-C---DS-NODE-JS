#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"Default Constructor."<<endl;
    }
    test(int n)
    {
        cout<<"One Parameter Int:"<<n<<endl;
    }
    test(int n,int m)
    {
        cout<<"Two Parameter Int:"<<n<<"-"<<m<<endl;
    }
    test(string str)
    {
        cout<<"One Parameter String:"<<str<<endl;
    }
};
int main()
{
    test t1,t2(2),t3(2,4),t4("Gautam");
}