#include<iostream>
using namespace std;
void print(int ,int);
void merge(int a[],int i1,int j1,int i2,int j2){
int i=i1;
int temp[20];
int j=i2;
int k=0;
while(i<=j1&&j<=j2){
if(a[i]<a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=j1)
temp[k++]=a[i++];
while(j<=j2)
temp[k++]=a[j++];
for(i=i1,j=0;i<=j2;j++,i++)
a[i]=temp[j];
}
void mergesort(int a[],int l,int h){
if(l<h){
int mid=(l+h)/2;
mergesort(a,l,mid);
mergesort(a,mid+1,h);
merge(a,l,mid,mid+1,h);
}
}

void print(int a[],int n){
for(int i=0;i<=n;i++)
cout<<a[i]<<"  ";
}
int main(){
int a[]={4,1,7,4,8,9};
int n=sizeof(a)/sizeof(a[0]);
print(a,n-1);
mergesort(a,0,n-1);
cout<<"\nafter sort\n";
print(a,n-1);
}
