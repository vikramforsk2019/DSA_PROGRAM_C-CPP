#include<iostream>
using namespace std;
int main ()
{
	float f,c;
	cout <<"enter the temperature in farenhite scale=";
	cin >> f;
	c=((f-32)/9)*5;
	cout <<"temperature in celsius="<<c<<endl;
	return 0;
}
