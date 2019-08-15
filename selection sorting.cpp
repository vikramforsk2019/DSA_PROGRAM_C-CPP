#include<stdio.h>
int main()
{
	int a[10];
	int i,j,minindex,temp;
	
	printf("enter 10 values-");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("Given elements-");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	
	for(i=0;i<9;i++)
	{
		minindex=i;
		for(j=i+1;j<10;j++)
		{
			if(a[minindex]>a[j])
			minindex=j;
		}
		if(minindex!=i)
		{
			temp=a[minindex];
			a[minindex]=a[i];
			a[i]=temp;
		}
	}
		printf("Resultant array\n");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
