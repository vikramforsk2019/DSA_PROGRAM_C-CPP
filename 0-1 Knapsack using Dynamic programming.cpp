#include<stdio.h>
int main()
{
	int size;
	printf("enter size - ");
	scanf("%d",&size);
	int value[size],weight[size],w;
	void dynamicknapsack(int , int * , int * , int);
	
	printf("enter values - ");
	for(int i=0;i<size;i++)
	scanf("%d",&value[i]);
	
	printf("enter weight for corresponding value - ");
	for(int i=0;i<size;i++)
	scanf("%d",&weight[i]);
	
	printf("enter the weight of knapsack - ");
	scanf("%d",&w);
	
	dynamicknapsack(w,value,weight,size);
	
}

void dynamicknapsack(int w , int *v ,int *wg , int n)
{
	int B[n+1][w+1];
	int max(int , int);
	int i,W;
	for(W=0;W<=w;W++)
	B[0][W]=0;
	
	for(i=0;i<=n;i++)
	B[i][0]=0;
	
	for(i=1;i<=n;i++)
	{
		for(W=1;W<=w;W++)
		{
			if(wg[i]<=W)
			B[i][W]=max(v[i]+B[i-1][W-1],B[i-1][W]);
			
			else
			B[i][W]=B[i-1][W];
		}
	}
	printf("total maximum profit : %d",B[n][w]);
}
int max(int a , int b)
{
	return(a>b)?a:b;
}
