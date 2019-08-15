#include<stdio.h>
#include<stdlib.h>
int stack [10];
int top = -1;
 int main ()
 {
 	int ch,data,x;
 	void push (int);
 	int pop ();
	 void display ();
	 
	 printf("***MENU***\n");
	 printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
	 
	
	 do{
	 	 printf("enter your choice : ");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1 : 
	 		printf("enter data-");
	 		scanf("%d",&data);
	 		push (data);
	 		break;
	 		
	 		case 2 :
	 			x=pop();
	 			break;
	 			
	 		case 3 :
			 display ();
			 break;
			
			case 4:
				exit(1);
			
			 default :
			 	printf("enter wrong choice please try again\n");
	 	
		 }
		 }while(ch!=4);
	 }
 
 void push (int x)
{

 	if (top==9)
 	printf("stack is overflow\n");
 	else
 	  {
	top++;
 		stack[top]=x;
  }
  }
  
 int pop()
 {
 	int x;
 	if (top==-1)
 	printf("stack is empty\n");
 	else
 	{
 		x=stack[top];
 		top--;
 		printf("deleted value=%d\n",x);
 		return (x);
 	}
 }
 
 void display ()
 {
 	int i;
 	if(top==-1)
 	printf("stack is empty\n");
 	else {
 		for(i=top;i>=0;i--)
 		{
 			printf("%d\n",stack[i]);
 		}
 	}
 }
