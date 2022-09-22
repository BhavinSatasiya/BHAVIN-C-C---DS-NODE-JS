#include<iostream>
using namespace std;
class test
{
    int n,m;
    public:
    test(int n,int m)
    {
        cout<<"This:"<<this<<endl;
        this->n=n;
        this->m=m;
    }
    void get_val()
    {
        cout<<"\nn:"<<n;
        cout<<"\nm:"<<m;
    }
};
int main()
{
    test t1(11,12),t2(34,54);
    cout<<"t1:"<<addressof(t1);
    cout<<"\nt2:"<<addressof(t2);
    t1.get_val();
    t2.get_val();
}