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
	
	int KMP(char *,int,char *,int);
	int k=KMP(T,n,P,m);
	printf("\nstring matched start at %dth position to %dth position",k,k+m);
}
int KMP(char *T,int n,char *P,int m)
{
	void Prefix_Table(char *,int,int *);
	int i=0,j=0;
	int F[m];
	Prefix_Table(P,m,F);
	
    printf("values in prefix table : ");
	for(int a=0;a<m;a++)
	printf("%d\t",F[a]);
	
	while(i<n)
	{
		if(T[i]==P[j])
		{
			if(j==m-1)
			return(i-j);
			else
			{
				i++;
				j++;
			}
		}
		else if(j>0)
		j=F[j-1];
		
		else
		i++;
	}
	return(-1);
	
}
void Prefix_Table(char *P,int m,int *F)
{
	int i=1,j=0;
	F[0]=0;
	while(i<m)
	{
		if(P[i]==P[j])
		{
			F[i]=j+1;
			i++;
			j++;
		}
		else if(j>0)
		j=F[j-1];
		
		else
		{
			F[i]=0;
			i++;
		}
	}	
}
