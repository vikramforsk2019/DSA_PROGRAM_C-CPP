#include<iostream>
using namespace std;
class Box
{
	public:
	double length;
	double height;
	double width;
	double volume;
	void Volume (double,double,double);
};
void Box::Volume(double x , double y , double z)
{
	length=x;
	height=y;
	width=z;
	volume=x*y*z;
	cout << "volume of box="<<volume<<endl;
}



int main ()
{
	Box box;
	double volume =0.0;
	box.length=5.0;
	box.height=5.0;
	box.width=5.0;
	
	volume = box.length*box.height*box.width;
	cout << "volume of box="<<volume<<endl;
	
}

