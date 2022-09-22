#include<iostream>
using namespace std;
class bike
{
    string name;
    string brand;
    public:
    bike(string n,string b)   //parameterised constructor
    {
        name=n;
        brand=b;
    }
    void mybike()
    {
        cout<<"\n"<<name<<"\n"<<brand;
    }
};
int main() 
   {
       bike gautam("\tPassion","\tHero"),
            yaman("\tActiva","\tHonda");
            cout<<"Gautam:";
       gautam.mybike();
       cout<<"\nYaman:";
       yaman.mybike();
   }
