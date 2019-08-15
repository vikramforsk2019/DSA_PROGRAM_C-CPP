#include<stdio.h>
#include<conio.h>
char postfix[100];
int stack[100];
int top=-1;
int main ()
{
	char *p;
	int n,n1,n2,r;
	void push(int);
	char pop();
	
	printf("enter a postfix expression\n");
	gets(postfix);
	p=postfix;
	
	while(*p!=NULL)
	{
		if(*p>=48 && *p<=57)
		{
			n=*p-48;
			push(n);
			p++;
		}
		else 
		{
			n1 = pop();
			n2 = pop();
			
			switch (*p)
			{
				case '+' :
					r=n2+n1;
					break;
					
				case '-' :
						r=n2-n1;
						break;
						
				case '*' :
				      r=n2*n1;
					  break;
					  
			 case '/' :
			 r=n2/n1;
			 break;		  		
			}
			push(r);
			p++;
		}
	}
	n=pop();
	printf("result=%d",n);
}
void push (int x)
{
	top++;
	stack[top]=x;
}
char pop()
{
	int x;
	x=stack[top];
	top--;
	return(x);
	getch();
	
}
