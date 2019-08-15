#include<iostream>
using namespace std;
class time
{
	int hour,minute;
	public:
		void input();
		void display();
		time operator+(time);
};
void time:: input()
{	
	cin >> hour >> minute;
}
void time :: display()
{
    if(minute>=60)
    {
    	int hours;
    	hours=minute/60;
	minute=minute%60;
	hour=hour+hours;
}
	cout <<hour<<":"<<minute;
}
time time :: operator+(time t2)
{
	time t;
	t.hour = hour+t2.hour;
	t.minute = minute+t2.minute;
	return t;
}
int main()
{
	time t1,t2,t3;
	cout<<"***enter first time***"<<endl;
	cout<<"enter  time t1 :";
	t1.input();
	cout<<"***enter second time***"<<endl;
	cout<<"enter time t2 :";
	t2.input();
	cout<<"t1 is : ";
	t1.display();
	cout<<"\nt2 is : ";
	t2.display();
    t3=t1+t2;
    cout<<"\ntime t3 is-";
	t3.display();
}
