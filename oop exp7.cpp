Write a program in C++ to use map associative container. The keys will be the names of 
states and the values will be the populations of the states. When the program runs, the user 
is prompted to type the name of a state. The program then looks in the map, using the state 
name as an index and returns the population of the state.

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	string state;
	int population;
	char ans ='y';
	int choice;
	map<string,int>m;
	map<string,int>::iterator i;
	do{
		cout<<"\n Main Menu";
		cout<<"\n1. Insert an element";
		cout<<"\n2. Display";
		cout<<"\n3. Search an state";
		
		cout<<"\n Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"\n Enter the name of the state : ";
			cin>>state;
			cout<<"\n Enter the population(in Cr) : ";
			cin>>population;
			m.insert(pair<string,int>(state,population));
			break;
			case 2:cout<<"State and population are : ";
			for(i=m.begin();i!=m.end();i++)
			cout<<"["<<(*i).first<<","<<(*i).second<<"]";
			break;
			case 3:cout<<"\n Enter the name of state for searching its population : ";
			cin>>state;
			if(m.count(state)!=0)
			cout<<"Population is "<<m.find(state)->second<<"Cr";
			else
			cout<<"State is not present in the list "<<endl;
			break;
		}
		cout<<"\n Do you want to continue?(y/n): ";
		cin>>ans;
	}while(ans=='y' || ans=='Y');
	return 0;
}


