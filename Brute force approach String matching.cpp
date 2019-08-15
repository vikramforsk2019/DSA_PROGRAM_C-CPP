#include<stdio.h>
int main()
{
	int n;
	printf("enter size of text : ");
	scanf("%d",&n);
	char T[n];
	printf("enter characters of text : ");
	scanf("%s",T);
	
	int m;
	printf("enter size of pattern : ");
	scanf("%d",&m);
	char P[m];
	printf("enter characters of pattern : ");
	scanf("%s",P);
	
	int brute_force(char *,int,char *,int);
   int k=brute_force(T,n,P,m);
   printf("position where string matched start : %d",k);
	
}
int brute_force(char *T,int n,char *P,int m)
{
	for(int i=0;i<n-m;i++)
	{
		int j=0;
		while(j<m && P[j]==T[i+j])
		{
			j=j+1;
		}
		if(j==m)
		return(i);
	}
	return(-1);
}
