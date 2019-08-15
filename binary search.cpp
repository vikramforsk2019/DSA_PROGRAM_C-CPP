#include<stdio.h>
int main ()
{
	int m[10];
	int low=0 , high=9,mid,i,x;
	int flag;
	printf("enter 10 elements -");
	for(i=0;i<10;i++)
	scanf("%d",&m[i]);
	
	printf("entered elements are-\n");
	for(i=0;i<10;i++)
	printf(" %d\t",m[i]);
	
	printf("\nenter elements to be searched -");
	scanf("%d",&x);
	
	while(low<=high)
	{
		mid = (low+high)/2;
		
		if(x==m[mid])
		{
			flag=1;
			break;
		}
		else if(x<m[mid])
		{
			high = mid -1;
		}
		else
		low = mid +1;
	
	}
	if(flag==1)
	{
	printf("element found at %d position\n",mid+1);
	}
	else
	printf("element not found\n");
	
}
