#include<iostream>
using namespace std;
class bank
{
    public:
    float balance;
    string name;
    string account_number;
    void setdata(float a)
    {
        cout<<"Account Holder Name:"<<endl;
        getline(cin,name);
        cout<<"Account Number:"<<endl;
        getline(cin,account_number);
        cout<<"Acoount Holder Name:"<<name<<endl;
        cout<<"Account Number:"<<account_number<<endl;
        balance=a;
        cout<<"Initial Balance:"<<balance<<endl;
    }
    float withdraw(float a)
    {
        if(a>balance)
        {
            cout<<"Insufficient Balance"<<endl;
            exit(0);
        }
        else
        {
            balance-=a;
            return balance;
        }
    }
    float diposite(float a)
    {
        balance+=a;
        return balance;
    }
    float fbalance()
    {
        return balance;
    }
};
class savingaccount:public bank
{
    public:
    savingaccount(float a)
    {
        setdata(a);
    }
    float withdraw(float a)
    {
        return bank::withdraw(a);
    }
    float diposite(float a)
    {
        return bank::diposite(a);
    }
    float fbalance()
    {
        return bank::fbalance();
    }
    void makechoice()
    {
        cout<<"\nPlease Choice from Menu"<<endl;
        cout<<"1:Withdrawal"<<endl;
        cout<<"2:Diposite"<<endl;
        cout<<"9:Current Balance"<<endl;
        cout<<"10:Loan"<<endl;
        cout<<"0:Exit"<<endl;
    }
};
class loan
{
    private:
        int LA,LT,emi,EM,TotalLoan;
        float IR=0;
       
        public:
        void setvalues()
        {
            cout<<"\nEnter Your Loan Amount :";
            cin>>LA;
             cout<<"\nEnter Interst Rate :";
            cin>>IR;
            cout<<"\nEnter Loan Time in year :";
            cin>>LT;
        }
        void loancal()
        {
            int i=1;
            float po=1;
            IR=IR/(12*100);
            LT=LT*12;
           while(i<=LT)
            {
                po=po*(IR+1);
                i++;
            }
           emi=LA*IR*((po)/(po-1));
           TotalLoan=emi*LT;
           EM=TotalLoan-LA;
        }     
        void showloan()
        {
            if(LA>=50000)
            {
            cout << "\n----------------------Details-----------------" << endl;
            cout<<"\nYour Monthly Emi is : "<<emi<<" Rs.";
            cout<<"\nYour Intrest Money is : "<<EM<<" Rs.";
            cout<<"\nYour Total Loan Money is : "<<TotalLoan<<" Rs.";
            }
            else
            cout<<"\nError!!!Minimum Amount of Loan is 50000";
        }   
};
int main()
{
    float a,x;
    int choice;
    cout<<"Welcome In Banking"<<endl;
    loan ok;
    savingaccount c1(1000);
    do
    {
        c1.makechoice();
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter Withdrawal Amount:"<<endl;
            cin>>a;
            x=c1.withdraw(a);
            cout<<"Total Balance after Withdrawal:"<<x<<endl;
            break;
            case 2:
            cout<<"Enter Diposite Amount:"<<endl;
            cin>>a;
            cout<<"Total Balance after Diposite:"<<c1.diposite(a);
            break;
            case 9:
            cout<<"Current Balance:"<<c1.fbalance();
            break;
            case 10:
            ok.setvalues();
            ok.loancal();
            ok.showloan();
            break;
            case 0:
            break;
        }
    }while(choice!=0);
}