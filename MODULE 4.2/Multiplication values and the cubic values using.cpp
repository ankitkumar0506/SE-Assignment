#include<iostream>
using namespace std;

inline 
void mul(int a,int b)
{
	cout<<"\n MULTIPLICATION of "<<a<<" and "<<b<<" is : "<<a*b;
	cout<<"\n\n The CUDE of "<<a<<" is : "<<a*a*a;
}

int main()
{
	int a,b;
	cout<<"Enter Two Numbers for MULTIPLICATION and its CUDE... \n";
	cin>>a>>b;
	mul(a,b);
}