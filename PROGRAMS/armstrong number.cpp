#include<iostream>
using namespace std;
int main ()
{
	int n,d,temp,arm=0;
	cout<<"enter any value-";
	cin>>n;
	temp=n;
	while(n>0)
	{
		d=n%10;
		arm=arm+(d*d*d);
		n=(n-d)/10;
	}
	if(arm==temp)
	{
		cout<<"number is armstrong number";
	}
	else
	cout<<"number is not armstrong number";
}
