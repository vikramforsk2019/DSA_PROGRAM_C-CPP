#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int Q[10];
int rear=-1;
int front=0;

int main ()
{
	int data , a, x;
	void insertion(int);
	int deletion();
	void display();
	while(1)
	{
	
	printf("***MENU***\n");
	printf(" 1.Insertion\n 2.Deletion\n 3.Display\n 4.Exit\n");
	
	
	
		scanf("%d",&a);
		switch (a)
		{
			case 1 :
				printf("enter data ");
				scanf("%d",&data);
				insertion(data);
				break;
				
				case 2 :
					x=deletion();
					printf("Deleted value=%d\n",x);
					break;
					
					case 3 :
						display();
						break;
						
						case 4 :
							exit(1);
							
				default :
				printf("entered choice is wrong plaese try again");			
		}
	}
}
void insertion (int x)
{
	if(rear==9)
	printf("Q is overflow");
	else
	{
		rear++;
		Q[rear]=x;
	}
}
int deletion()
{
	int x;
	if(rear==front-1)
	printf("Q is overflow");
	else
	{
		x=Q[front];
		front++;
		return(x);
	}
}
void display ()
{
	int i;
	if (rear==front-1)
	printf("Q is empty");
	else
	{
		for (i=front;i<=rear;i++)
		{
			printf("Value=%d\n",Q[i]);
		}
	}
}
