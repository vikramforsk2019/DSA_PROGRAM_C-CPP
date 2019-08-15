#include<stdio.h>
#include<conio.h>
char infix[100],stack[100],postfix[100];
int top = -1;

int main ()
{
	char *p,*t,n;
	void push (char);
	char pop();
	int priority(char);
	printf("enter an infix expression =");
	gets(infix);
	p=infix;
	t=postfix;
	
	while(*p!=NULL)
	{
		if(*p=='(')
		{
			push (*p);
			p++;
		}
		else if((*p>=48 && *p<=57) || (*p>=65 && *p<=90) || (*p>=97 && *p<=122))
		{
			*t=*p;
			t++;
			p++;
		}
		else if(*p=='+'||*p=='-'||*p=='*'||*p=='/')
		{
			if(stack[top]=='('||top==-1)
			{
				push(*p);
				p++;
			}
			else
			{
				n=pop();
			
			while(priority(*p)<=priority(n))
			{
				*t=n;
				t++;
				if(stack[top]=='('||top==-1)
				break;
				else
				n=pop();
			}	
				if(priority(*p)>priority(n))
				push(n);
				push(*p);
				p++;
			}
		}
		else if(*p==')')
		{
			n=pop();
			while(n!='(')
			{
				*t=n;
				t++;
				n=pop();
			}
			p++;
		}
	}
	while(top!=-1)
	{
		n=pop();
		*t=n;
		t++;
	}
	*t=NULL;
	printf("Resultant postfix expression is =");
	puts(postfix);
	getch();
	
	char *a;
	int n1,n2,r;
	void pushr(int);
	char popr();

	a=postfix;
	
	while(*a!=NULL)
	{
		if(*a>=48 && *a<=57)
		{
			n=*a-48;
			pushr(n);
			a++;
		}
		else 
		{
			n1 = popr();
			n2 = popr();
			
			switch (*a)
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
			pushr(r);
			a++;
		}
	}
	n=popr();
	printf("result=%d",n);
}
void push(char x)
{
	top++;
	stack[top]=x;
}
char pop()
{
	char x;
	x=stack[top];
	top--;
	return(x);
}
int priority(char x)
{
	if(x=='+'||x=='-')
	return(1);
	else if(x=='*'||x=='/')
	return(2);
}
void pushr (int x)
{
	top++;
	stack[top]=x;
}
char popr()
{
	int x;
	x=stack[top];
	top--;
	return(x);
	getch();
	
}

