#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue*q)
{
     if(q->f==q->r)
     {
        return 1;
     }
     return 0;
}
int isfull(struct queue*q)
{
      if(q->r==q->size-1)
      {
        return 1;
      }
      return 0;
}
void enqueue(struct queue *q,int val)
{
        if(isfull(q)){
            cout<<"QUEUE IS FULL"<<endl;
        }
        q->r++;
        q->arr[q->r]=val;

}
int dequeue(struct queue *q)
{
    int a=-1;
       if(isempty(q))
       {
        cout<<"QUEUE IS EMPTY"<<endl;
       }else{
       q->f++;
       a=q->arr[q->f];
       }
       return a;
       
}
int main()
{
    struct queue q;
    q.size=50;
    q.f=q.r=-1;
    q.arr=(int*)malloc(sizeof(int));

   //BFS IMPLEMENTATION//
   int node;
   int visited[7]={0,0,0,0,0,0,0};
   int i=0;

   int a[7][7]={
    {0,1,1,1,0,0,0},
    {1,0,0,1,0,0,0},
    {1,0,0,1,1,0,0},
    {1,1,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,0,1,0},
    {0,0,0,0,1,0,0},
   };
   cout<<i;
   visited[i]=1;
   enqueue(&q,i);
while(!isempty(&q))
{
     int node=dequeue(&q);
     for(int j=0;j<7;j++){
        if(a[node][j]==1 && visited[j]==0)
        {
              cout<<" "<<j;
              visited[j]=1;
              enqueue(&q,j);
        }
     }
}
}










