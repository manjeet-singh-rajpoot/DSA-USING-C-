#include<iostream>
#include<stdlib.h>
using namespace std;
void arraylist(int *A,int n)
{
    for(int i=0;i<n;i++){
        cout<<" "<<A[i];
    }
cout<<"\n";
}
void bubblesort(int *A,int n)
{
      int temp;
      int issorted=0;
       for(int i=0;i<n-1;i++)
       {
          cout<<"NUMBER OF PASSES: "<<i+1<<endl;;
          issorted=1;
          for(int j=0;j<n-1-i;j++)
          {
             if(A[j]>A[j+1]){
                 temp=A[j];
                 A[j]=A[j+1];
                 A[j+1]=temp;
                 issorted=0;
          }
          }
          if(issorted)
          return;
       }
}
int main()
{
    int A[]={60,50,40,30,20,10};
    int n=6;
    cout<<"BEFORE BUBBLE SORTING : ";
    arraylist(A,n);
   cout<<"AFTER BUBBLE SORTING : "<<endl;
    bubblesort(A,n);
    arraylist(A,n);
   
}