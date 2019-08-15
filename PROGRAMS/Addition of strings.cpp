#include<iostream>
using namespace std;
class str
{
	char name[6];
	char place[6];
	public:
		void putdata();
		void display();
};
void str :: putdata()
{

	cout << "enter string -- ";
	cin>>name;
	
	cout<<"enter string -- ";
	cin>>place;
}
void str :: display ()
{
	cout << "full name is : "<<name<<place;
}
int main ()
{
	str o;
	o.putdata();
	o.display();
}
