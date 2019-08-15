#include<stdio.h>
char exp[50];
char stack[50];
int top=-1;
int main ()
{
	char *p;
	void push(char);
	int pop();
	printf("enter an arithmatic expression=");
	gets(exp);
	p=exp;
	while(*p!=NULL)
	{
		if(*p=='(')
		{
			push(*p);
			p++;
		}
		else if(*p==')')
		{
			if(stack[top]==-1)
			{
			pop();
			}
			else
			{
				printf("balance expression");
				break;
			}
		}
		else 
		{
			p++;
		}
	}
	if(*p==NULL && top==-1)
	{
	printf("balance expression");
}
	else if(*p==NULL && top!=-1)
{
		printf("unbalance expression");
	}
}
void push (char x)
{
	top++;
	stack[top]=x;
}
int pop()
{
	char x;
	x=stack[top];
	top--;
	return(x);
}
