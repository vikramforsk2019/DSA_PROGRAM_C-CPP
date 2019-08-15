 #include<iostream>
using namespace std;
int cq[11];
int rear=-1;
int front=0;
void insert(int num,int n){
//cout<<rear;
if(rear==num&&front==0){
cout<<"queue is over flow\n";
}
/*
else if(rear==-1)
{
rear=0;
cq[rear]=num;
}
*/
else if(rear==n&&front!=0){
rear=0;
cq[rear]=num;
}
else if(rear==front-1){
cout<<"queue is overflow";
}
else
{
rear++;
cout<<"rear:"<<rear<<endl;
cq[rear]=num;
}
}
void display(int n){
if(rear<0)
cout<<"queue is empty flow\n";
else{
if(rear>=front){
for(int i=front;i<=rear;i++)
cout<<cq[i]<<"  ";
}
else{
for(int i=front;i<n;i++)
cout<<cq[i];
for(int i=0;i<=rear;i++)
cout<<cq[i]<<" ";
}
}
}
int delet(int n){
int x;
if(rear==-1)
cout<<"no element";
else
{
x=cq[front];
if(rear==front){
front=0;
rear=-1;
}
else if(rear==n&&front>=0){
front=0;
rear=0;
}
else
front++;
return x;
}
}
int main(){
int x,n;
cout<<"size queue\n";
cin>>n;
int ch,y;
while(1){
cout<<"\nenter choice\n";
cin>>ch;
switch(ch)
{
case 1:cout<<"enter element\n";
cin>>x;
insert(x,n);
break;
case 2:
display(n);
break;
case 3:y=delet(n);
cout<<"delet:"<<y;
break;
default:cout<<"invalid\n";
}
}
}
