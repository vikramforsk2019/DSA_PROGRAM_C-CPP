#include<iostream>
using namespace std;
class time
{
	int hour,minute;
	public:
		void input();
		void display();
		void output(time,time);
};
void time:: input()
{	
	cin >> hour >> minute;
}
void time :: display()
{
    if(minute>60)
    {
	minute=minute%60;
	hour=hour+1;
}
	cout <<hour<<":"<<minute;
}
void time :: output(time t1, time t2)
{
	hour = t1.hour+t2.hour;
	minute = t1.minute+t2.minute;
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
	t3.output(t1,t2);
	cout << "\nt3 is : ";
	t3.display();
	
}
