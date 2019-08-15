#include<iostream>
using namespace std;
class str
{

	int rollno;
	char name[5];
	public:
		void putdata ();
		void display();
};

void str :: putdata()
{
	cout <<"enter roll number : ";
	cin >> rollno;
	cout << "enter name : ";
	cin >> name;
}
void str :: display()
{
	cout << "\nRoll Number="<<rollno;
	cout << "\nName="<<name;
}
int main()
{
	str o;
	o.putdata();
	o.display();
	
}




