#include<iostream>
using namespace std;
class Person

{
	private:
	public:
		string name;
		int age;
		void setPerson()
		{
			cout<<"Enter name: ";
			getline(cin,name);
//			cin>>name;
//			cin.ignore();
			cout<<"Enter Age : ";
			cin>>age;
		}
};
class Student
{
	private:
	public:
		float percentage;
		void setStudent()
		{
			cout<<"Enter percentage :";
			cin>>percentage;
		}
};
class  Teacher: public Person, public Student
{
	private:
	public:
		float salary;
		void setTeacher()
		{
			cout<<"Enter salary :";
			cin>>salary;
		}
		void displayTeacher()
		{
			cout<<"Name:  "<<name<<endl;
			cout<<"Age:    "<<age<<endl;
			cout<<"Student details are: \n";
			cout<<"Prcentage is:  "<<percentage<<endl;
			cout<<"Teachers details are: \n";
			cout<<"Salary:  "<<salary<<endl;
		}
};

int main()
{
	Teacher t;
	t.setPerson();
	t.setStudent();
	t.setTeacher();
	t.displayTeacher();
}