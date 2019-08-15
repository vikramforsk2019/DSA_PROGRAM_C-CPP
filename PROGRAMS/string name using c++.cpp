#include<iostream>
using namespace std;
class str
{
	char name[10];
	public:
		void getdata();
		void display();
};
void str :: getdata()
{
	cout << "enter name=";
	cin.getdata(name)
}
void str :: display()
{
	cout<<name;
}
int main()
{
	str o;
	o.getdata();
	o.display();
}
