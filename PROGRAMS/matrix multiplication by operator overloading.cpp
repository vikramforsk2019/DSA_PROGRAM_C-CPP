#include<iostream>
using namespace std;
class matrix
{
	int a[3][3]  ;
	public:
		void input();
		void inputb();
		void display();
		matrix operator*(matrix);
		
};
void matrix :: input()
{
		for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
	cout << "enter element of first matrix"<<i+1<<j+1<<"-";
    cin >> a[i][j];
}
}
	cout << "matrix is = "<<endl;
        for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<< " "<<a[i][j];
		if(j==2)
		cout<<"\n \n";
	    }
   }
}
void matrix :: inputb()
{
		for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
	cout << "enter element of second matrix"<<i+1<<j+1<<"-";
    cin >> a[i][j];
}
}
cout << "matrix is = "<<endl;
for(int i=0;i<3;i++)
		{
		for(int j=0;j<3;j++)
		{
		cout<< " "<<a[i][j];
		if(j==2)
		cout<<"\n \n";
	}
}
}
void matrix :: display()
{
	for(int i=0;i<3;i++)
		{
		for(int j=0;j<3;j++)
		{
		cout<< " "<<a[i][j];
		if(j==2)
		cout<<"\n \n";
	}
}
}
matrix matrix :: operator*(matrix y)
{
	matrix t;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			t.a[i][j]=0;
			for(int k=0;k<3;k++)
			{
				t.a[i][j]=t.a[i][j]+(a[i][k]*y.a[k][j]);
	    	}
		}
	}
	return t;
}
int main ()
{
	matrix m1,m2,m3;
	m1.input();
	m2.inputb();
	m3=m1*m2;
	cout<<"new matrix is -\n";
	m3.display();
}
