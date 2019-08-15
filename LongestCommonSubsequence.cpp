#include<stdio.h>
int main()
{
	int m;
	printf("enter the size of text : ");
	scanf("%d",&m);
	char T[m];
	printf("enter characters of text : ");
	scanf("%s",T);
	
	int n;
	printf("enter the size of text : ");
	scanf("%d",&n);
	char P[n];
	printf("enter characters of pattern : ");
	scanf("%s",P);
	
	
	int LCS[m][n];
	int max(int , int);
	
	for(int i=0;i<=m;i++)
	LCS[i][0]=0;
	
	for(int i=0;i<=n;i++)
	LCS[0][i]=0;
	
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(T[i]==P[j])
			{
				LCS[i][j]=1+LCS[i-1][j-1];
			}
			else
			LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
		}
	}
	printf("maximum length common subsequence is : %d\n",LCS[m][n]);
	
	int k=LCS[m][n]+1;
	char S[k];
	S[k]='\0';
	
	while(i>0   &&  j>0){
	
			if(T[i-1]==P[j-1])
			{
				S[k-1]=T[i];
				k--;
				i--;
				j--;
			}
			else if(LCS[i-1][j]>LCS[i][j-1])
			{
				i--;
			}
			else
			j--;
		
	}
	printf("%s",S);
}
int max(int a , int b)
{
	return(a>b)?a:b;
}
