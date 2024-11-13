#include<iostream>
#include<stdlib.h>
using namespace std;

int isempty();
int isfull();
int display();
int gethighestpriority();
int insert(int,int);
int deletehighestpriority();
struct priorityqueue
{
    int ele;
    int priority;
}pq[5];
int front=-1;
int rear=-1;
int main()
{
        int ch,p,ele;
         cout<<"1.INSERT\n 2.gethighestpriority\n 3.DELETEhighestpriority,\n 4.DISPLAY \n.5.EXIT"<<endl;
    do{
    
        cout<<"ENTER YOUR CHOICE : "<<endl;
        cin>>ch;
    switch(ch){
        case 1: 
           if(isfull()){
            cout<<" PRIORITY QUEUE IS FULL"<<endl;
           }
           else{

             cout<<"ENTER ELEMENT FOR INSERT: ";
             cin>>ele;
             cout<<"ENTER PRIORITY : ";
             cin>>p;
             insert(ele,p); 
           }
        break;
        case 2:
        if(isempty()){
            cout<<"PRIORITY QUEUE IS EMPTY : "<<endl;
        }
         else{
            p=gethighestpriority();
            cout<<"HIGHEST PRIORITY IS : "<<p;
         }
        break;
        case 3:
            if(isempty()){
                cout<<"PRIORITY QUEUE IS EMPTY "<<endl;
            }
            else{
                ele=deletehighestpriority();
                cout<<"DELETE HIGHEST PRIORITY : "<<ele;
            }
        break;
        case 4:
        if(isempty()){
          cout<<"PRIORITY QUEUE IS EMPTY"<<endl;
        }else
               display();
        break;


    }
    }while(ch!=5);
}
int isempty()
{
    if(rear==-1)
    {
          return 1;
    }
    else{
         return 0;
    }
}
int isfull()
{
    if(rear==4){
        return 1;
    }
    else{
        return 0;
    }
}
int insert(int ele,int p)
{
     rear=rear+1;
     pq[rear].ele=ele;
     pq[rear].priority=p;
}
int gethighestpriority()
{
      int i,p=-1;
      if(!isempty()){
    for(i=0;i<=rear;i++)
    {
         if(pq[i].priority>p)
            p=pq[i].priority;
    }
 }
    return p;
}
int deletehighestpriority()
{
    int i,p,j,ele;
    p=gethighestpriority();
    for(i=0;i<=rear;i++)
    {
           if(pq[i].priority==p){
            ele=pq[i].ele;
           }
    }
    if(i<rear)
    {
         for(j=i;j<rear;j++){
            pq[j].ele=pq[j+1].ele;
            pq[j].priority=pq[j+1].priority;
         }
    }
    rear=rear-1;
    return ele;
}
int display()
{
    for(int i=0;i<=rear;i++)
    {
        cout<<"ELEMENT : "<<pq[i].ele<<endl;
        cout<<"PRIORITY : "<<pq[i].priority<<endl;
    }
}