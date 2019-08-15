#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void input();
		void output();
		void swap ();
		
};
void A :: input ()
{
	cin >> a >>b;
}
void A :: output ()
{
	cout <<"a is ="<<a<<endl;
	cout << "b is ="<<b<<endl;
}
void A:: swap ()
{
	int c;
	c=a;
	a=b;
	b=c;
}
int main ()
{
	A o;
	o.input();
	o.output();
	o.swap();
	o.output();
}
