#include<iostream>
using namespace std;
class array
{
	int a[10];
	public:
		void input();
		void output();
};
void array :: input ()
{
	
	for (int i=0; i<10 ; i++)
	{
        cout << " Enter Values : ";
		cin>>a[i];
	}
}

void array :: output()
{
	int max , min , i;
   max=a[0];
   min=a[0];
   
  for ( i=1 ; i<10 ; i++)
  {
    if (a[i]>max)
  	max=a[i];
  	else if(a[i]<min)
  	min=a[i];
  }
  
 cout << "Maximum is :"<<max<<endl;
 cout << "Minimum is :"<<min;
}

int main ()
{
	array o;
	o.input();
	o.output();
}
