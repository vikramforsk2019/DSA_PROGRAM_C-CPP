#include<stdio.h>
int main()
{
	int size;
	printf("enter size - ");
	scanf("%d",&size);
	float value[size],weight[size],W[size],w;
	void knapsack(float , float * , float * , int);
	
	printf("enter values - ");
	for(int i=0;i<size;i++)
	scanf("%f",&value[i]);
	
	printf("enter weight for corresponding value - ");
	for(int i=0;i<size;i++)
	scanf("%f",&weight[i]);
	
	for(int i=0;i<size;i++)
	{
		W[i]=value[i]/weight[i];
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(W[j]<W[j+1])
			{
				float temp1 , temp2 , temp3;
				
				temp1=W[j];  
				W[j]=W[j+1];
				W[j+1]=temp1;
				
				temp2=weight[j];
				weight[j]=weight[j+1];
				weight[j+1]=temp2;
				
					temp3=value[j];
				value[j]=value[j+1];
				value[j+1]=temp3;
			}
		}
	
}
	printf("value to weight ratio in sorted order - ");
	   for(int i=0;i<size;i++){
	   printf("%f\n",W[i]);
}
	printf("\nenter the weight of knapsack - ");
	scanf("%f",&w);
	
	knapsack(w,value,weight,size);

}

void knapsack(float w, float *v , float *wg, int n)
{
	float x[n], tp=0;
	int i;
	
	for(i=0;i<n;i++)
	x[i]=0.0;
	
	for(i=0;i<n;i++)
	{
		if(wg[i]>w)
		break;
		
		else
		{
			x[i]=1.0;
			tp=tp+v[i];
			w=w-wg[i];
			printf("profit while taking %dth value %f\n",i,tp);
		}
	}
	if(i<n)
	x[i]=w/wg[i];
	printf("profit of %dth value %f\n",i,x[i]*v[i]);
	
	tp=tp+(x[i]*v[i]);
	printf("\ntotal maximum profit - %f",tp);
}
