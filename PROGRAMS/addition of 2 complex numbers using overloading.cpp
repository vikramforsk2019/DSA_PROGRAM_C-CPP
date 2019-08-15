#include<iostream>
using namespace std;
class complex
{
	int real , imag;
	public:
		void input();
		complex operator*(complex);
		void display();
};
void complex :: input()
{
	cin >> real ;
	cin >> imag ;
}
void complex :: display()
{
	cout << real<<"+"<<imag<<"i";
}
complex complex :: operator*(complex c2)
{
	complex t;
	t.real = real*c2.real - imag*c2.imag;
    t.imag = real*c2.imag + imag*c2.real;
	return t;
}
int main ()
{
	complex c1,c2,c3;
	cout<<"enter  c1 :";
	c1.input();
	cout<<"enter  c2 :";
	c2.input();
	cout<<"c1 is : ";
	c1.display();
	cout<<"\nc2 is : ";
	c2.display();
	c3=c1*c2;
	cout<<"\nc3 is=";
	c3.display();
	
	}
