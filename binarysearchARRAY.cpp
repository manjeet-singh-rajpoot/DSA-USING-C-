#include<iostream>
#include<stdlib.h>
using namespace std;
  int binarysearch(int arr[],int size,int element)
  {
       int low,high,mid;
       low=0;
       high=size-1;
       mid=(low+high)/2;
    while(low<=high)
    {
          if(arr[mid]==element)
          {
              return mid;
          }
          if(arr[mid]<element)
          {
              low=mid+1;
          }
          else
          {
               high=mid+1;
          }
    }
    return -1;
  }
  int main()
  {
      int arr[34]={23,45,35,345,34,24,56,66};
      int size=8;
      int element=56;
      int searchindex=binarysearch(arr,size,element);
      cout<<"the Element of "<<element<<"was found index "<<searchindex;
  }