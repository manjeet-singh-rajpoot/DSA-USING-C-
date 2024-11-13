#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
void traversaldll(struct node *head)
{
    if(head==NULL)
    cout<<"list is empty"<<endl;
      struct node *p=head;
      while(p!=NULL)
      {
          cout<<"Element : "<<p->data<<endl;
          p=p->next;
      }
      
}
struct node*insertatfirst(struct node *head,int item)
{
       struct node *ptr=(struct node*)malloc(sizeof(struct node));
       struct node *p=head;
       ptr->next=head;
        head->prev=ptr;
       ptr->data=item;
       head=ptr;
       return ptr;
}
struct node *insertatbetween(struct node *head,int item,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=item;
    if(ptr->prev!=NULL)
    {
        cout<<"previos can not be null "<<endl;
    }
    int i=0;
    while(i!=index-1)
    {
        p=p->next; 
        i++;
    }
   ptr->next=p->next;
   p->next=ptr;
   ptr->prev=p;
   if(ptr->next!=NULL)
    ptr->next->prev=ptr;
   return head;
}
struct node *insertatatend(struct node *head,int item)
{
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   struct node *p=head;
   ptr->data=item;
   while(p->next!=NULL)
   {
     p=p->next;
   }
   p->next=ptr;
   ptr->prev=p;
   ptr->next=NULL;
   return head;

}
int main()
{
    struct node *r;
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
 //creat node//

 head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
 third=(struct node*)malloc(sizeof(struct node));
 forth=(struct node*)malloc(sizeof(struct node));
 //connection//
 head->data=20;
 head->prev=NULL;
 head->next=second;

 second->data=30;
 second->prev=head;
 second->next=third;

 third->data=40;
 third->prev=second;
 third->next=forth;

 forth->data=50;
 forth->prev=third;
 forth->next=NULL;

r=head;
traversaldll(head);
//cout<<"after insertion first : "<<endl;
//head=insertatfirst(head,10);
//traversaldll(head);
//cout<<"after insertion between : "<<endl;
//head=insertatbetween(head,15,2);
//traversaldll(head);
cout<<"after insertion at end : "<<endl;
head=insertatatend(head,15);
traversaldll(head);
}