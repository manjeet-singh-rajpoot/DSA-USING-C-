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
void merge(int *A,int mid,int low,int high)
{
      int i,j,k;
      int B[100];
    i=low;
    j=mid+1;
    k=low;
  while(i<=mid && j<=high)
  {
      if(A[i]<A[j])
      {
          B[k]=A[i];
          i++;k++;
      }
      else{
          B[k]=A[j];
          j++;k++;
      }
  }
  while(i<=mid)
  {
      B[k]=A[i];
      k++;i++;
  }
  while(j<=high)
  {
      B[k]=A[j];
      k++;i++;
  }
  for(int i=low;i<=high;i++)
  {
        A[i]=B[i];
  }
}
int mergesort(int *A,int low,int high)
{
      int mid;
    if(low<high){
    mid=(low+high)/2;
    mergesort(A,low,mid);
    mergesort(A,mid+1,high);
    merge(A,mid,low,high);
}
}

int main()
{
    int A[]={90,80,70,60,50};
    int n=5;
    displayarr(A,n);
    mergesort(A,0,4);
    displayarr(A,n);
}