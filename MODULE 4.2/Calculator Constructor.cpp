#include<iostream>
using namespace std;

class calculator
{
	public :
		calculator(int a,int b)
		{
			cout<<"\n\nAddition of "<<a<<" and "<<b<<" is... "<<a+b;
			cout<<"\n\nSubtraction of "<<a<<" and "<<b<<" is...  "<<a-b;
			cout<<"\n\nMultiplication of "<<a<<" and "<<b<<" is...  "<<a*b;
			cout<<"\n\nDivision of "<<a<<" and "<<b<<" is...  "<<a/b;
		}
};
int main()
{
	int a,b;
	cout<<"Enter Tow Numbers for calculating...\n\n";
	cout<<"First number... ";
	cin>>a;
	cout<<"Second number... ";
	cin>>b;
	calculator c1(a,b);
}