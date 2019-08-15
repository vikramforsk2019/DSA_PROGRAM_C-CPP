#include<iostream>
using namespace std;
class str
{
int real , imag;
	public:
		void putdata();
		void display();
};
void str :: putdata()
{
	cin>>real;
	cin >> imag;
}
void str :: display()
{
	cout << "complex number="<<real<<"+"<<imag<<"i";
}
int main ()
{
	str o;
	o.putdata();
	o.display();
}
