#include<iostream>
using namespace std;
class com
{
	float real , imag;
	public:
		com(float x, float y)
		{
			real =x;
			imag =y;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i";
		}
		com(com &c , com &a)
		{
				real = c.real*a.real - c.imag*a.imag;
                imag = c.real*a.imag + c.imag*a.real;
		}
};
int main ()
{
	com c=com(3,4);
	c.display();
	cout<<"\n";
	com a=com(4,5);
	a.display();
	cout<<"\n";
	com b(c,a);
	b.display();
}
