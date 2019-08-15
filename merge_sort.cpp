#include<stdio.h>
int main()
{
	int a[10];
	void merge_sort(int * , int , int);
	int i;
	
	printf("enter 10 values-");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	merge_sort(a,0,9);
	printf("sorted array - ");
	
		for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
void merge_sort(int *p , int low , int high)
{
	int mid;
	void merge(int * , int , int ,int );
	if(low < high)
	{
		mid = (low + high)/2;
	   merge_sort(p , low , mid);
		merge_sort(p , mid+1, high);
		merge(p , low ,mid , high);
	}
}
void merge(int *p , int low , int mid , int high)
{
	int A[10],i,j,k;
	i=low;
	j=mid+1;
	k=0;
	
	while(i<=mid && j<=high)
	{
		if(p[i]<p[j])
		{
			A[k]=p[i];
			i++;
			k++;
		}
		else
		{
			A[k]=p[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		A[k]=p[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		A[k]=p[j];
		j++;
		k++;
	}
k=0;
for(i=low;i<=high;i++)
{
	p[i]=A[k];
	k++;
}
}
