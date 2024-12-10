Implement a class Complex which represents the Complex number data type. 
Implement the following: 
1. Constructor (including a default constructor which creates the complex number 
0 + 0i) 
2. Overload operator + to add two complex numbers 
3. Overload operator * to multiply two complex numbers 
4. Overload Operators << and >> to print and read Complex numbers

#include<iostream>
using namespace std;
class complex
{
	float realp,imagp;
	public:
	complex()
	
	{
		realp=0;
		imagp=0;
		
	}
	
	complex operator+(complex&);
	complex operator*(complex&);
	complex(float,float);
	friend istream &operator>>(istream &,complex &);
	friend ostream &operator<<(ostream &,complex &);
	
};

complex::complex(float x,float y)
{
	realp=x;
	imagp=y;
	
}
istream &operator>>(istream &din,complex &c)
{
	cout<<"enter real part of complex number 2:";
	din>>c.imagp;
	return din;
}
ostream &operator<<(ostream &dout,complex &c)
{
	dout<<c.realp<<"+"<<c.imagp<<"i";
	dout<<endl;
	return dout;
	
}
complex complex::operator+(complex &c)
{
	complex temp;
	temp.realp=realp+c.realp;
	temp.imagp=imagp+c.imagp;
	return temp;
}
complex complex::operator*(complex &c)
{
	complex mul;
	mul.realp=(realp*c.realp);
	mul.imagp=(imagp*c.imagp);
	return mul;
}  
int main()
{
	complex c2,c3;
	complex c1(1.2,2.2);
	cout<<"complex no1 is:"<<c1<<endl;
	cout<<"enter the complex no2:"<<endl;
	cin>>c2;
	cout<<"complex no1 is :"<<c1<<endl;
	cout<<"complex no2 is:"<<c2<<endl;
	cout<<"addition of two complex number is:";
	c3=c1+c2;
	cout<<c3;
	cout<<"multiplication of two complex number is:";
	c3=c1*c2;
	cout<<c3;
	return 0;
}
