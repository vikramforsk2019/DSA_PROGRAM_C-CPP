#include<iostream>
using namespace std;
void quicksort(int,int,int);
int partion(int a[],int l,int h){
int pivot=a[h];
int i=l-1;
for(int j=l;j<=h-1;j++){
if(a[j]<a[h]){
i++;
swap(a[i],a[j]);
}
}
swap(a[i+1],a[h]);
return (i+1);
}
void quicksort(int a[],int l,int h){
if(l<h){
int pi=partion(a,l,h);
cout<<pi;
quicksort(a,l,pi-1);
quicksort(a,pi+1,h);
}
}
void swap(int *a,int *b){
int t=*a;
*a=*b;
*b=t;
}
int main(){
int arr[]={3,6,1,8,3,7};
int n=sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);
cout<<"after quick sort\n";
for(int i=0;i<n;i++)
cout<<arr[i]<<"  ";
}
