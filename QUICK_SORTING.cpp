#include<iostream>
using namespace std;
void displayarr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
    cout<<"\n";
}
int partition(int *A,int low,int high)
{
     int pivote=A[low];
     int i=low+1;
     int j=high;
     int temp;
  do
  {
     while(A[i]<=pivote)
     {
        i++;
     }
     while(A[j]>pivote)
     {
        j--;
     }
   if(i<j)
   {
      temp=A[i];
      A[i]=A[j];
      A[j]=temp;
     
   }
  }while(i<j);
      temp=A[low];
      A[low]=A[j];
      A[j]=temp; 
      return j; 
}
int quicksort(int *A,int low,int high)
{
    int partitionindex;//index of pivote after partition
    if(low<high){
      partitionindex=partition(A,low,high);
    quicksort(A,low,partitionindex-1);
    quicksort(A,partitionindex+1,high);
    }
}
int main()
{
      int A[]={90,80,70,60};
      int n=4;
    displayarr(A,n);
    quicksort(A,0,n-1);
    displayarr(A,n);
}