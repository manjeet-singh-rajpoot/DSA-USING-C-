#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isempty(struct queue *q)
{
      if(q->front==q->rear)
      {
        return 1;
      }
      else{
        return 0;
      }
}
int isfull(struct queue *q)
{
      if(q->rear==q->size-1)
      {
             return 1;
      }
      else{
        return 0;
      }
}
int enqueue(struct queue *q,int val)
{
     if(isfull(q))
     {
          cout<<"QUEUE IS FULL";
     }
     else{
         q->rear++;
         q->arr[q->rear]=val;
     }
}
int dequeue(struct queue *q)
{
    int a=-1;
      if(isempty(q)){
        cout<<"QUEUE IS EMPTY";
        return -1;
      }
      else{
        q->front++;
        a=q->arr[q->rear];
      }
      return a;
}
int main()
{
      struct queue q;
      q.size=2;
      q.front=-1;
      q.rear=-1;
      q.arr=(int*)malloc(q.size*sizeof(int));
//enqueue//
    enqueue(&q,12);
    cout<<"DEQUEUE FIRST ELEMENT "<<dequeue(&q)<<endl;
     enqueue(&q,56);
    
if(isempty(&q))
{
    cout<<"queue is empty"<<endl;
}else{
    cout<<"queue is  not empty"<<endl;
}


}