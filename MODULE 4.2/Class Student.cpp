#include<iostream>
using namespace std;

class student
{
	public:
		long long rollno;
		void roll()
		{
			cout<<"Enter student Roll No... : ";
			cin>>rollno;
		}
};
class test : public student
{
	public :
		int mark1,mark2;
		void mark()
		{
			cout<<"Enter Your first Subject Marks... : ";
			cin>>mark1;
			cout<<"Enter Your Second Subject Marks... : ";
			cin>>mark2;
		}
};
class result : public test
{
	public :
		int total;
		void display()
		{
			total = mark1 + mark2;
			cout<<"\n\nRoll no. of Student : "<<rollno<<endl
			<<"Marks of first Subject is : "<<mark1<<endl
			<<"Marks of second subject is : "<<mark2<<endl
			<<"Total Marks : "<<total<<endl
			<<"Percentage is : "<<total/2<<" %";
		}
		
};
int main()
{
	result r;
	r.roll();
	r.mark();
	r.display();
}