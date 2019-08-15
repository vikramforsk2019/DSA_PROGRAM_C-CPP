#include<iostream>
using namespace std;
class employ
{
    int id;
	char name[100];
	float salery;
	
	public:
	void putdata ();
	void display();
};

void employ :: putdata()
{
	
	
	cout <<"Enter id : ";
	cin >> id;
	cout << "Enter name : ";
	cin>>name;
	cout << "Enter salery :";
	cin >> salery;

}
void employ :: display ()
{
	

   cout << "\nEmploy id :"<<id;
	cout << "\nEmploy Name :"<<name;
		cout << "\nEmploy salery :"<<salery;

}
int main()
{
	employ oject[5];
	for(int i=0;i<5;i++)
    oject[i].putdata();
		for(int i=0;i<5;i++)
	oject[i].display();


}
