#include<iostream>
using namespace std;
class math
{
    public:
    void showchoice()
{
    cout<<"MENU\n";
    cout<<"1.Add\n";
    cout<<"2.Subtract\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\n";
    cout<<"5.Exit\n";
    cout<<"Enter your Choice:";
}
float add(float x,float y)
{
    return x+y;
}
float subtract(float x,float y)
{
    return x-y;
}
float multiply(float x,float y)
{
    return x*y;
}
float divide(float x,float y)
{
    return x/y;
}
}
int main()
{
    math cal;
    float x,y;
    int choice;
    do
    {
        cal.showchoice();
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter two number:";
            cin>>x>>y;
            cout<<"sum:"<<cal.add(x,y)<<endl;
            break;
        case 2:
            cout<<"Enter two number:";
            cin>>x>>y;
            cout<<"Diffrence:"<<cal.subtract(x,y)<<endl;
            break;
        case 3:
            cout<<"Enter two number:";
            cin>>x>>y;
            cout<<"Multiplication:"<<cal.multiply(x,y)<<endl;
            break;
        case 4:
            cout<<"Enter two number:";
            cin>>x>>y;
            cout<<"Quotient:"<<cal.divide(x,y)<<endl;
            break;
        case 5:
            break;
            default: 
            cout<<"Invalid input";
        }
    } while (choice!=5);  
} 