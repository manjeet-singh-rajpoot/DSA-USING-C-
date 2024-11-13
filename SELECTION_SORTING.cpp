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
void selectionsort(int *A,int n)
{
    int indexofmin,temp;
    for(int i=0;i<n;i++)
    {
        indexofmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[indexofmin])
            indexofmin=j;
        }
    temp=A[i];
    A[i]=A[indexofmin];
    A[indexofmin]=temp;
    }
}
int main()
{
    int A[]={89,56,29,10,67};
    int n=5;
    displayarr(A,n);
    selectionsort(A,n);
    displayarr(A,n);
}