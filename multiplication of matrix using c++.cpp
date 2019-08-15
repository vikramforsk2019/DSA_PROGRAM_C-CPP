#include<iostream>
using namespace std;
class matrix
{
	int a[3][3]  ;
	public:
		void input();
		void inputb();
		void display();
		void output(matrix,matrix);
		
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
void matrix :: output(matrix m1,matrix m2)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j]=0;
			for(int k=0;k<3;k++)
			{
				a[i][j]=a[i][j]+(m1.a[i][k]*m2.a[k][j]);
	    	}
		}
	}
}
int main ()
{
	matrix m1,m2,m3;
	m1.input();
	m2.inputb();
	m3.output(m1,m2);
	cout <<"\nNew Matrix is -"<<endl;
	m3.display();
}
