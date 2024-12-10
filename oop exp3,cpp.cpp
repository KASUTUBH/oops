
Imagine a publishing company which does marketing for book and audio cassette 
versions. Create a class publication that stores the title (a string) and price (type float) 
of a publication. From this class derive two classes: book, which adds a page count 
(type int), and tape, which adds a playing time in minutes (type float). Write a program 
that instantiates the book and tape classes, allows user to enter data and displays the 
data members. If an exception is caught, replace all the data member values with zero 
values.

#include<iostream>
using namespace std;
class Publication
{
	public:
		string title;
		float price;
	public:
		void getdata()
		{
			cout<<"Enter the title of the Publication : ";
			cin>>title;
			cout<<"Enter the price of the book : ";
			cin>>price;
			
		}
		void display(){
			cout<<"The publication title is : "<<title<<endl;
			cout<<"The price of the book is : "<<price<<endl;
		}
};
class Book:public Publication 
{
	public:
		int pagecount;
	public:
		void getdata()
		{
			Publication::getdata();
			cout<<"Enter the number of pages : "<<pagecount;
			cin>>pagecount;
			
		}
		void display()
		{
			Publication::display();
			cout<<"The number of pages in the book are : "<<pagecount<<endl;
		}
};
class Tape:public Publication
{
	private:
		float ptime;
	public:
		void getdata()
		{
			Publication::getdata();
			cout<<"Enter the playtime (in minutes) : "<<ptime;
			cin>>ptime;
			
		}
		void display()
		{
			Publication::display();
			cout<<"The playtime is : "<<ptime<<endl;
		}
};
int main()
{
	Book b;
	Tape t;
	b.getdata();
	t.getdata();
	b.display();
	t.display();
	return 0;
	
}

