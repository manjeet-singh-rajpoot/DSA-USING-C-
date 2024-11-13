#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
 struct node*f=NULL;
 struct node*r=NULL;
int traversal(struct node *ptr)
{
      cout<<"PRINTING THE ELEMENT OF THIS LINKED LIST : "<<endl;
      while(ptr!=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
      }
}

int enqueue(int val)//insertion process is done in queue from last node
{
      struct node*n=(struct node*)malloc(sizeof(struct node));
      if(n==NULL)
      {
        cout<<"OVERFLOW"<<endl;
      }
      else{
      n->data=val;
       n->next=NULL;
      if(f==NULL){
        f=r=n;
      }
      else{
      r->next=n;
      r=n;
      }
      
 }
}
int dequeue()//deletion process is done from the first node//
{
   int val=-1;
   struct node *ptr=f;
   if(f==NULL)
   {
      cout<<"QUEUE IS EMPTY"<<endl;
   }
   else{
    f=f->next;
    val=ptr->data;
    free(ptr);
}
return val;
}
int main()
{
  cout<<"delete element :"<<dequeue()<<endl;
    traversal(f);
    enqueue(45);
    enqueue(67);
    enqueue(57);
    enqueue(34);
    traversal(f);
     cout<<"delete element :"<<dequeue()<<endl;

 traversal(f);
}