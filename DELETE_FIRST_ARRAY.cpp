#include<iostream>
#include<stdlib.h>
using namespace std;
void display(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<endl;
     }
}
int  inddeletion(int arr[],int index ,int size,int capacity)
{ 
    if(size>=capacity)
    {
        return -1;
    }
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }  
}
int main()
{
      int arr[100]={4,5,6,7,8,9};
      cout<<"before deletion :- "<<endl;
       display(arr,6);
       int index=0,size=6;
       cout<<"After deletion :- "<<endl;
       inddeletion(arr,index,size,100);
       size-=1;
       display(arr,size);





}