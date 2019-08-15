#include<iostream>
using namespace std;
class  sample
{
	float a,b;
	public:
		void getdata();
		friend float mean (sample);
};
void sample :: getdata()
{
	cout <<"enter two values-";
	cin>>a>>b;
}
float mean (sample k)
{
	return((k.a+k.b)/2);
}
int main()
{
	sample o;
	o.getdata();
    float r=mean(o);
	cout << "result-"<<r;	
}
