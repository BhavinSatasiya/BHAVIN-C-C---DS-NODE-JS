#include<iostream>
using namespace std;
class Myclass
{
    int a,b;
    public:
    void set_ab(int i,int j)
    {
        this->a=i;
        this->b=j;
    }
    friend int sum(Myclass x)
    {
        return x.a+x.b;
    }
};
int main()
{
    Myclass n;
    n.set_ab(3,4);
    cout<<sum(n);
    return 0;
}