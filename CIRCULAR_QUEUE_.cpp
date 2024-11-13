#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue
{
    int size;
    int front ;
    int rear;
    int *arr;
};
int isempty(struct queue *q)
{
      if(q->rear==q->front)
      {
        return 1;
      }
      else{
        return 0;
      }
}
int isfull(struct queue *ptr)
{
    if((ptr->rear+1)%ptr->size==ptr->front)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int enqueue(struct queue *q,int val)
{
    if(isfull(q)){
        cout<<"OVERFLOW"<<endl;
    }else{
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=val;
        cout<<"ENQUE : "<<val<<endl;
    }
}
int dequeue(struct queue *q)
{
    int val=-1;
    if(isempty(q))
    {
        cout<<"UNDERFLOW"<<endl;
    }else{
        q->front=(q->front+1)%q->size;
        val=q->arr[q->front];
    }
    return val;
}
int main()
{
    struct queue q;
    q.size=4;
    q.front=0;
    q.rear=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,34);
    enqueue(&q,35);
    enqueue(&q,56);
    enqueue(&q,67);
    cout<<"deque : "<<dequeue(&q)<<endl;
    cout<<"deque : "<<dequeue(&q)<<endl;
    cout<<"deque : "<<dequeue(&q)<<endl;
    cout<<"deque : "<<dequeue(&q)<<endl;
if(isempty(&q))
{
    cout<<"Empty"<<endl;
}
else{
    cout<<"not empty"<<endl;
}
if(isfull(&q))
{
    cout<<"full"<<endl;
}
else{
    cout<<"NOT FULL"<<endl;
}
    
}