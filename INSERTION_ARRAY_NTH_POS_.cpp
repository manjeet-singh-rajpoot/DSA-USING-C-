#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void display(int arr[],int n)
{
    //for traversal
      for(int i=0;i<=n;i++)
      {
          cout<<arr[i]<<endl;
      }
}
int indinsertion(int arr[],int element,int index,int size,int capicity)
{
      if(size>=capicity)
      {
          return -1;
      }
      for(int i=size-1;i>=index;i--)
      {
            arr[i+1]=arr[i];
      }
      arr[index]=element;
      return 1;
}
int main()
{
    int arr[100]={7,8,15,27,39};
    display(arr,5);
    cout<<"After insertion = "<<endl;
    int element=45,index=2,size=5;
    indinsertion(arr,element,index,size,100);
    size+=1;
    display(arr,size);
}
