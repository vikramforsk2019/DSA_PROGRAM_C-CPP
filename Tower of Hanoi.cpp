#include<stdio.h>
int main()
{
	int n;
	printf("enter number of rings : ");
	scanf("%d",&n);
	
	char tower1 , tower2 , tower3;
	void Tower_Of_Hanoi(int , char , char , char);
	Tower_Of_Hanoi(n,'tower1','tower2','tower3');
}
void Tower_Of_Hanoi(int n , char t1 , char t2 , char t3)
{
	if(n==0)
	printf("No transfer is possible\n");
	
else if(n==1)
	{
       printf("transfer ring direct from tower %c to tower %c\n",t1,t3);		
	}
	else
	{
		Tower_Of_Hanoi(n-1,t1,t3,t2);
		Tower_Of_Hanoi(1,t1,t2,t3);
		Tower_Of_Hanoi(n-1,t2,t1,t3);
	}
}
