#include<iostream>  ///DEQUEUE = DOUBLE ENDED QUEUE//
#include<stdlib.h>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
int isempty(struct queue*ptr){
    if(ptr->front==0 && ptr->rear==1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct queue *ptr)
{
     if(ptr->front==0 && ptr->rear==ptr->size-1)
     {
       return 1;
     }else{
        return 0;
     }
}
int enqueuef(struct queue*ptr,int val){
    if(isfull(ptr)){
        cout<<"DEQUEUE IS FULL"<<endl;
    }else{
      ptr->front++;
        ptr->arr[ptr->front]=val;
         cout<<"INTSIRTION ELEMENT : "<<val<<endl;
    }
}
int dequeueR(struct queue*ptr){
    int val=-1;
    if(isempty(ptr)){
        cout<<"QUEUE IS EMPTY"<<endl;
        return -1;
    }else{
       ptr->rear++;
         val=ptr->arr[ptr->rear];
    }
    return val;
}
int main(){
    struct queue q;
    q.size=4;
    q.front=-1;
    q.rear=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueuef(&q,34);
    enqueuef(&q,56);
    enqueuef(&q,23);
    enqueuef(&q,34);
  enqueuef(&q,34);
  enqueuef(&q,34);
  enqueuef(&q,34);
     cout<<"DELETE ELEMENT : "<<dequeueR(&q)<<endl;
     cout<<"DELETE ELEMENT : "<<dequeueR(&q)<<endl;
     cout<<"DELETE ELEMENT : "<<dequeueR(&q)<<endl;
if(isempty(&q)){
    cout<<"QUEUE IS EMPTY"<<endl;
}else{
    cout<<"QUEUE IS NOT EMPTY"<<endl;
}
if(isfull(&q)){
    cout<<"QUEUE IS FULL"<<endl;
}else{
    cout<<"QUEUE IS not full"<<endl;
}
}










