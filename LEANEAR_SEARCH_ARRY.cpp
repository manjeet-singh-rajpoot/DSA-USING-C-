#include<iostream>
#include<stdlib.h>
using namespace std;
int linearsearch(int arr[],int element,int size)
{
    for(int i=0;i<size;i++)
    {
         if(arr[i]==element)
         {
              return i;
         }
    }
    return -1;
}
int main()
{
      int arr[40]={34,45,67,23,45,23,56,34,12,34,12,34,55,56};
      int element;
      cout<<"IF ELEMENT IS AVAILABLE IN ARRAY SO GIVEN 1 OTHERWISE -1 "<<endl;
       cout<<"ENTER ANY ELEMENT WHICH YOU WANT TO CHECK IN ARRAY :- ";
       cin>>element;
      int size=sizeof(arr)/sizeof(int);
      int searchindex=linearsearch(arr,element,size);
      cout<<"the element of "<<element<<" is found in "<<searchindex;
}