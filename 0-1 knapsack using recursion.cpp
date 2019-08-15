#include<stdio.h>
int main()
{
	int size;
	printf("enter size - ");
	scanf("%d",&size);
	int value[size],weight[size],w;
	int knapsack(int , int * , int * , int);
	
	printf("enter values - ");
	for(int i=0;i<size;i++)
	scanf("%d",&value[i]);
	
	printf("enter weight for corresponding value - ");
	for(int i=0;i<size;i++)
	scanf("%d",&weight[i]);
	
	printf("enter the weight of knapsack - ");
	scanf("%d",&w);
	
	int k=knapsack(w,value,weight,size);
	printf("maximum profit - %d",k);
}

int knapsack(int w , int *v ,int *wg , int n)
{
	int max(int , int);
	if(n==0 || w==0)
	return(0);
	
	if(wg[n-1]>w)
	knapsack(w,v,wg,n-1);
	
	else
	return(max(v[n-1]+knapsack(w-wg[n-1],v,wg,n-1) , knapsack(w,v,wg,n-1)));
}
int max(int a , int b)
{
	return(a>b)?a:b;
}
