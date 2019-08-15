#include<stdio.h>
int main()
{
	int a[10];
	int i,j,temp;
	
	printf("enter 10 values-");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("Given elements-");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Resultant array\n");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
