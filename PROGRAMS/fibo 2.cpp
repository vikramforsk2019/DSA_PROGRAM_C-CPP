#include<stdio.h>
int main ()
{
	int n,i=0,j=1,next,c;
	printf("enter number of terms");
	scanf("%d",&n);
	printf("first %d terms of fibonacci series are \n",n);
	for(c=0;c<n;++c)
	{
		printf("%d\n",i);
			
			next=i+j;
			i=j;
			j=next;
		
		
	}
	return 0;
}
