#include<iostream>
using namespace std;
const int size=10;
class array
{
	int a[size] ;
	public:
		void input();
		void output();
		void display();
		
};
void array :: input ()
{
	
	for (int i=0; i<size ; i++)
	{
        cout << " Enter Values : ";
		cin>>a[i];
	}
}
void array :: display()
{
int b;
	cout <<b;
}
void array :: output()
{
int b;
	for (int i=0; i<size ; i++)
	{
		b=b+a[i];
	}
}

int main ()
{
	array o;
	o.input();
	o.output();
	o.display();
}
