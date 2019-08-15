#include<iostream>
using namespace std;
int main ()
{
	char ch;
	float a,b,c;
	int x,y,z;
	
	while(1){
		cout<<"enter operator  : ";
		cin>>ch;
		
		switch(ch)
		{
				case '+' :
				       cout<<"enter two values-";
				       cin>>a>>b;
				       c=a+b;
				       cout<<"addition = "<<c<<endl;
				       break;
				
				case '-' :
				cout<<"enter two values-";
				       cin>>a>>b;
				       c=a-b;
				       cout<<"subtraction = "<<c<<endl;
				       break;
					
					case '*' :
						cout<<"enter two values-";
				       cin>>a>>b;
				       c=a*b;
				       cout<<"multiplication = "<<c<<endl;
				       break;
						
						case '/' :
							cout<<"enter two values-";
				       cin>>a>>b;
				       c=a/b;
				       cout<<"division = "<<c<<endl;
				       break;
				       
				       case '%' :
	                      		cout<<"enter two values-";
				       cin>>x>>y;
				       z=x%y;
				       cout<<"remainder = "<<z<<endl;
				       break;
							
				default :
			        cout<<"wrong choice entered try again"<<endl;	
		}
	}
}
