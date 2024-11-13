#include<iostream>
#include<stdlib.h>
using namespace std;
void displayarr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
    cout<<"\n";
}
int insertionsort(int *A,int n)
{
       int key,j;
     for(int i=0;i<=n-1;i++)
     {
          key=A[i];
          j=i-1;
        while(j>=0 && A[j]>key)
        {
              A[j+1]=A[j];
              j--;
        }
         A[j+1]=key;
     }
}
int main()
{
    int A[]={24,56,23,45,67};
    int n=5;
    cout<<"BEFORE INSERTION SORT: ";
    displayarr(A,n);
    cout<<"AFTER INSERTION SORT : " ;
    insertionsort(A,n);
    displayarr(A,n);

}