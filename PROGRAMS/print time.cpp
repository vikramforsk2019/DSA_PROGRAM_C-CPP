#include<iostream>
using namespace std;
class time
{
	int hour=12, minute=67;
	public:
		void putdata();
		void output();
		void display();
};
void time:: putdata()
{
	cout << "Hours:"<<hour<<endl;
    
	cout << "Minutes:"<<minute<<endl;
	
}
void time :: display()
{
	cout <<"Time = "<<hour<<" "<<"Hours"<<" "<<"and"<<" "<<minute<<" "<<"Minutes";
}
void time :: output()
{
	if(minute>60)
	minute=minute%60;
	hour=hour+1;
	
}
int main()
{
	time object;
	object.putdata();
	object.output();
	object.display();
}
