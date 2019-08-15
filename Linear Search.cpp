#include<stdio.h>
int main()
{
	int a[10];
	int i,data;
	
	printf("enter 10 values-");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("array\n");
		for(i=0;i<10;i++)
			printf("%d\n",a[i]);
			
			printf("enter data to be searched");
			scanf("%d",&data);
			
			for(i=0;i<10;i++)
			{
				if(a[i]==data)
				break;
			}
			if(i<10)
			{
				printf("element found at position %d",i);
			}
			else
			{
				printf("data not found");
			}
}
