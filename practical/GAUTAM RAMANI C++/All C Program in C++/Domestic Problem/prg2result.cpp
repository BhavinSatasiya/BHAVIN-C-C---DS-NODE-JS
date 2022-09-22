#include<iostream>
using namespace std;
int main()
{
    int m,c,p,total,per;
    cout<<"Maths= \nChemistry= \nPhysics=";
    cin>>m>>c>>p;
    total=m+c+p;
    cout<<"\nTotal="<<total;
    if(m<35||c<35||p<35)
		cout<<"\nFail";
    else
    {
        per=total/3;
        cout<<"\nper="<<per;
	 if(per>=75&&per<=100)
	
		cout<<"\nA Grade";
	
	else if(per>=60&&per<=75)
	
		cout<<"\nB Grade";
	
	else if(per>=45&&per<=60)

		cout<<"\nC Grade";
	
	else if(per>=35&&per<=45)
	
		cout<<"\nD Grade";
	
	else if(per>=0&&per<=35)
	
		cout<<"\nFail\nTry Again Grade";
	
    }
}