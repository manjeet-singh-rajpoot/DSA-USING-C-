#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
      int data;
      struct node*next;
};
int traversal(struct node *ptr)
{
       while(ptr!=NULL)
       {
           cout<<"Element : "<<ptr->data<<endl;
           ptr=ptr->next;
       }
}
int isempty(struct node *top)
{
       if(top==NULL)
       {
           return 1;
       }
       else
       {
        return 0;
       }
}
int isfull(struct node *top)
{
       struct node *n=(struct node*)malloc(sizeof(struct node));
       if(n==NULL)
       {
           return 1;
       }
       else{
        return 0;
       }
}
struct node *push(struct node *top,int x)
{
    if(isfull(top)){
        cout<<"stack is overflow"<<endl;
    }
     struct node *n=(struct node*)malloc(sizeof(struct node));
      n->data=x;
      n->next=top;
      top=n;
      return top;
}
int pop(struct node **top)
{ 
    if(isempty(*top))
    {
         cout<<"stack is empty "<<endl;
    }
    struct node *n=*top;
       *top=(*top)->next;
       int x=n->data;
       free(n);
       return x;
      
}
int peek(struct node *top,int pos)
{
      struct node *ptr=top;
      for(int i=0;(i<pos-1 && ptr!=NULL);i++)
      {
           ptr=ptr->next;
      }
     if(ptr!=NULL)
     {
          return ptr->data;
     }
     else{
          return -1;
     }
}
int main()
{
    struct node *top=NULL;
      cout<<"Before any operation : "<<endl;
      top=push(top,45);
      top=push(top,36);
      top=push(top,67);
      top=push(top,85);
      top=push(top,89);
      top=push(top,20);
      traversal(top);
      
     // int element =pop(&top);
      //cout<<"poped Element : "<<endl<<element<<endl;
      //traversal(top);

    for(int i=1;i<=6;i++)
    {
          cout<<"position : "<<i<<endl<<"Element : "<<peek(top,i)<<endl;
    }
}