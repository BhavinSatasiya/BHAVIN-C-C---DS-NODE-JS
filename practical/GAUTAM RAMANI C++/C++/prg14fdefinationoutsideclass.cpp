#include<iostream>
using namespace std;
class bank
{
    float final_balance;
    public:
    bank(float);
    float withdraw(float);
    float diposite(float);
    float finalbalance();
};
    bank::bank(float n)
    {
        final_balance=n;
    }
    float bank::withdraw(float a)
    {
        final_balance-=a;
        return final_balance;
    }
    float bank::diposite(float a)
    {
        final_balance+=a;
        return final_balance;
    }
    float bank::finalbalance()
    {
        return final_balance;
    }
int main()
{
    float a;
    int choice;
    cout<<"Welcome in Banking"<<endl;
    bank statement(1000);//-------------------------------------->Constructor
    do
    {
        cout<<"Please choice from Menu"<<endl;
        cout<<"1:Withdrawal"<<endl;
        cout<<"2:Diposite"<<endl;
        cout<<"9:Show Balance"<<endl;
        cout<<"0:Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter Withdrawal Amount:"<<endl;
            cin>>a;
            cout<<"Total Balance after Withdrawal:"<<statement.withdraw(a)<<endl;
            break;
            case 2:
            cout<<"Enter Diposite Amount:"<<endl;
            cin>>a;
            cout<<"Total Balance after Diposite:"<<statement.diposite(a)<<endl;
            break;
            case 9:
            cout<<"Show Balance:"<<statement.finalbalance()<<endl;
            break;
            case 0:
            break;
        }
    } while (choice!=0);
    cout<<"Thank you for Banking"<<endl;    
}
