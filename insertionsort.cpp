#include<iostream>
using namespace std;
void insert(int n,int a[]){
int i,j,temp;
for(i=1;i<n;i++){
temp=a[i];
j=i-1;
while((a[j]>temp)&&(j>=0)){
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
}
int main(){
int i;
int arr[]={2,1,7,4,5};
cout<<"befotr sort\n";
for(i=0;i<5;i++)
cout<<arr[i]<<"  ";
insert(5,arr);
cout<<"\nafter sort\n";
for(i=0;i<5;i++)
cout<<arr[i]<<"  ";
cout<<"\n";
return 0;
} 
