#include<iostream>
using namespace std;
int factr(int);
int main ()
{
	int n,fact;
	cout<<"enter any value-";
	cin>>n;
	fact=factr(n);
	cout<<"result="<<fact;
}
int factr(int x)
{
	if(x==0)
	return (1);
	else
	return(x*factr(x-1));
}


