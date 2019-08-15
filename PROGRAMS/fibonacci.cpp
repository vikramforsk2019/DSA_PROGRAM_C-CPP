#include<stdio.h>
int fibonacci(int);
int main  ()
{
	int n,i,j=0;
	scanf("%d",&n);
	printf("fibonacci series");
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",fibonacci(j));
		j++;
	}
	return 0;
}
int fibonacci(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fibonacci(n-1) + fibonacci(n-2));
}


