#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node*prev;
    struct node *next;
};
void traversaldcll(struct node*head)
{
      struct node*ptr=head; 
      do
      {
          cout<<"Element : "<<ptr->data<<endl;
          ptr=ptr->next;
      }while(ptr!=head);
}
struct node *insertatfirst(struct node*head,int value)
{
     struct node*ptr=(struct node*)malloc(sizeof(struct node*));
     struct node *p=head->prev;
     ptr->data=value;
     ptr->next=head;
     ptr->prev=p;
     p->next=ptr;
     head=ptr;
    return ptr;
}
struct node *insertatafternode(struct node *head,int value,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node*));
    struct node *p=head;
    ptr->data=value;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
   ptr->next=p->next;
   p->next=ptr;
   ptr->prev=p;
   p->next->prev=ptr;
    return head;
}
struct node *insertatatend(struct node *head,int data)
{
      struct node *ptr=(struct node*)malloc(sizeof(struct node));
      //struct node *p=head;
      struct node *q=head->prev;
      ptr->data=data;
      ptr->prev=q;
      ptr->next=head;
      q->next=ptr; 
      head->prev=q; 
      return head;
}
int main()
{
      struct node *head=NULL;
      struct node *second=NULL;
      struct node *third=NULL;
      struct node*forth=NULL;

    //creat memory //
      head=(struct node*)malloc(sizeof(struct node));
      second=(struct node*)malloc(sizeof(struct node));
      third=(struct node*)malloc(sizeof(struct node));
      forth=(struct node*)malloc(sizeof(struct node));
    //conect node//
     head->data=20;
     head->prev=forth;
     head->next=second;

     second->data=30;
     second->prev=head;
     second->next=third;
 
     third->data=40;
     third->prev=second;
     third->next=forth;

     forth->data=50;
     forth->prev=third;
     forth->next=head;

     cout<<"Before any operation : "<<endl;
     traversaldcll(head);
     // cout<<"AFTER INSERTION FIRST: "<<endl;
     // head=insertatfirst(head,10);
      //traversaldcll(head);
 //cout<<"AFTER INSERTION AFTERNODE: "<<endl;
     // head=insertatafternode(head,15,2);
     // traversaldcll(head);
cout<<"AFTER INSERTION END: "<<endl;
      head=insertatatend(head,15);
      traversaldcll(head);

}