#include<iostream>
#include<math.h>
using namespace std;
class A
{
	float a,b;
	public:
		void getdata ();
		void putdata ();
		void sq ();
		
};
void A :: getdata()
{
	cout << "enter number";
	cin >>a;
}
void A :: sq()
{
cout << "root is="<<b;
}
void A::putdata()
{
	
		b=sqrt(a);
}
int main ()
{
	A o;
	o.getdata();
	o.putdata();
	o.sq();
	
	
}
