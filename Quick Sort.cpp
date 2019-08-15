#include<stdio.h>
int main()
{
	int a[10];
	void quick_sort(int * , int , int);
	int i;
	
	printf("enter 10 values-");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	quick_sort(a,0,9);
	printf("sorted array - ");
	
		for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
void quick_sort(int *a ,int p , int q)
{
	int partition(int * , int , int);
	int j;
	if(p<q)
	{
		j=partition(a,p,q+1);
		quick_sort(a,p,j-1);
		quick_sort(a,j+1,q);
	}
}
int partition(int *a , int m , int p)
{
	int v=a[m];
	int l=m;
	int r=p;
	do
	{
		do{
			l=l+1;
		}while(a[l]<=v);
		
		do{
			r=r-1;
		}while(a[r]>=v);
		
		if(l<r)
		{
			int temp;
			temp=a[l];
			a[l]=a[r];
			a[r]=temp;;
		}
	}while(l<=r);
	
	int temp;
	temp=a[m];
	a[m]=a[r];
	a[r]=temp;
	return(r);
}
