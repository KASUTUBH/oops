Write a C++ program that creates an output file, writes information to it, closes the file and 
open it again as an input file and read the information from the file.

#include<iostream>
#include<fstream>
using namespace std;
class Employee{
	char Name[20];
	int ID;
	double salary;
	public:
		void accept()
		{
			cout<<"enter the name of employee :";
			cin>>Name;
			cout<<"enter id of employee:";
			cin>>ID;
			cout<<"enter the salary of employee";
			cin>>salary;
		}
		void display()
		{
			cout<<"\n Name is"<<Name;
			cout<<"\n id is"<<ID;
			cout<<"\nsalary is"<<salary;
			
		}
};
int main()
{
	Employee o[5];
	fstream f;
	int i,n;
	
	f.open("r17.txt");
	cout<<"\n how many employee information do you need to store?";
	cin>>n;
	cout<<"\n enter information of employee in this format(NAME/ID/SALARY)";
	for(i=0;i<n;i++)
	{
		cout<<"\n enter information of:"<<i<<"\n Employee";
		o[i].accept();
		f.write((char*)&o[i],sizeof o[i]);
	}
	f.close();
	f.open("r17.txt");
	cout<<"\n information of employees are as follows";
	for(i=0;i<n;i++)
	{
		f.write((char*)&o[i],sizeof o[i]);
		o[i].display();
	}
	f.close();
	 return 0;
}

