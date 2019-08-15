#include<stdio.h>
char exp[50];
char stack[50];
int top=-1;

int main ()
{
	char *p;
	printf("enter an expression");
	gets(exp);
    p=exp;
	
	while(*p!=NULL)
	{
		if(*p=='(')
		{
			top++;
			stack[top]=*p;
			p++;
	}
	   
        else if(*p==')')
		{
			if(top==-1)
			{
				top--;
				p++;
			}
			else
			{
				printf("unbalance expression");
			}
	
	    }
     else
	{
		p++;
	}
}

if(*p==NULL&&top==-1)
printf("balance expression");
else if(*p==NULL&&top!=-1)
printf("unbalance expression");
}
