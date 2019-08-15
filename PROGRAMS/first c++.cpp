#include<iostream>
using namespace std;
class Box
{
	int number;
	float cost;
	public:
		void getdata (int , float);
		void putdata();
};
void Box :: getdata (int x, float y)
{
	number = x;
	cost =y;
	
}
void Box :: putdata()
{
	cout << "number="<<number;
	cout << "cost="<<cost;
}
int main ()
{
	Box S1;
	S1.getdata(5,5.5);
	S1.putdata();
}
