#include<stdio.h>
int main()
{
    
    int size;
    printf("enter number of dimensions : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the dimensions : ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
 int MatrixChainMul(int *, int);
 int k=MatrixChainMul(arr, size);
    printf("Minimum number of multiplications = %d ",k);
                       

}
int MatrixChainMul(int p[], int n)
{
 
    int m[n][n];
    int s[n][n];
    int i, j, k, L, q;
 
    for (i=1; i<n; i++)
        m[i][i] = 0;
 
    for (L=2; L<n; L++)
    {
        for (i=1; i<n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = 10000;
            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                
                if (q < m[i][j]){
				m[i][j] = q;
				s[i][j]=k;
			}
            }
        }
    }
 printf("splitting position = %d\n",s[1][n-1]);
    return m[1][n-1];
    
}
 


