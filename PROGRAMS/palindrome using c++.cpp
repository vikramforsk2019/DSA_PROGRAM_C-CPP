#include<iostream>
using namespace std;
int main ()
{
	int n,d;
	cout<<"enter any number-";
	cin>>n;
	
	d=n%10;
	n=n*10;
	n=n/10;
	if(d==1)
	{
		cout<<"number is palindrome and the number is "<<n;
	}
	else
	{
		cout<<"number is not palindrome";
	}
	
}
