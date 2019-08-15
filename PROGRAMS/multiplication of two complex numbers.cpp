#include<iostream>
using namespace std;
class complex
{
	int real , imag;
	public:
		void input();
		void output(complex,complex);
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
void complex :: output(complex c1,complex c2)
{
	real = c1.real*c2.real - c1.imag*c2.imag;
    imag = c1.real*c2.imag + c1.imag*c2.real;
	
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
	c3.output(c1,c2);
	cout << "\nc3 is : ";
	c3.display();
	}
