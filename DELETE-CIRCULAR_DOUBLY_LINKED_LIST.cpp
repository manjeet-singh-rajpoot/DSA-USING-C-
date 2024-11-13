#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node*next;
};
void traversaldcll(struct node *head)
{
    struct node *ptr=head;
    do
{
    cout<<"Element : "<<ptr->data<<endl;
    ptr=ptr->next;
}while(ptr!=head);
}
 struct node*deleteatfirst(struct node*head)
 {
    struct node *p=head;
    struct node *q=head->next;
    struct node*r=head->prev;
    q->prev=r;
    r->next=q;
    head=q;
    free(p);
    return head;
 }
 struct node*deleteafternode(struct node *head,int index)
 {
       struct node *p=head;
       struct node *q=head->next;
       struct node *r=q->next;
      // struct node *r=head->prev;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
       q=q->next;
       i++;
    }
   p->next=q->next;
   q->next=p;
   r->prev=p;
   free(q);
   return head;
 }
 struct node *deletelast(struct node *head)
 {
   // struct node *p=head;
   // struct node *r=head->next;
    struct node*q=head->prev;
    struct node*l=q->prev;
    q->prev=head;
    head->prev=q->prev;
    l->next=head;
    free(q);
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

     cout<<"BEFORE ANY OPERATION : "<<endl;
     traversaldcll(head);

     //cout<<" AFTER  DELETE FIRST NODE : "<<endl;
     //head=deleteatfirst(head);
     //traversaldcll(head);

     cout<<" AFTER  DELETE AFTER NODE : "<<endl;
     head=deleteafternode(head,2);
       traversaldcll(head);
    // cout<<" AFTER  DELETE AFTER LAST OR END NODE : "<<endl;
     //head=deletelast(head);
     //traversaldcll(head);
}
