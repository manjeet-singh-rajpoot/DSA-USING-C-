#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
     while(ptr!=NULL)
     {
          cout<<"Element: "<<ptr->data<<endl;
          ptr=ptr->next;
     }
}
struct node *insertatfirst(struct node *head,int data)
{
      struct node *ptr=(struct node*)malloc(sizeof(struct node));
      ptr->next=head;
      ptr->data=data;
      head=ptr;
      return head;
}
struct node *insertatbetween(struct node *head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
           int i=0;
           struct node *p=head;
           while(i!=index-1)
           {
              p= p->next;
              i++;
           }
         ptr->data=data;
        ptr->next=p->next;
        p->next=ptr;
        return head;       
}
struct node *insertatatend(struct node *head,int data)
{
        struct node*ptr=(struct node*)malloc(sizeof(struct node*));
        struct node *p=head;
        ptr->data=data;
        while(p->next!=NULL)
        {
              p=p->next;
        }
     p->next=ptr;
     ptr->next=NULL;
     return head;
}
struct node*insertatafternode(struct node*head,int data,struct node *q)
{
   //mistake//
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=data;
       ptr->next=q->next;
       q->next=ptr;
}



int main()
{
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
 head->next=second;

 second->data=30;
 second->next=third;

 third->data=40;
 third->next=forth;

 forth->data=50;
 forth->next=NULL;
 cout<<"before insertion : "<<endl;
 linkedlisttraversal(head);

 //cout<<"After first insertion : "<<endl;
 //head=insertatfirst(head,10);
 //linkedlisttraversal(head);
 
 //cout<<"After index insertion : "<<endl;
 //head=insertatbetween(head,10,2);
 //linkedlisttraversal(head);

cout<<"After end insertion : "<<endl;
 head=insertatatend(head,10);
 linkedlisttraversal(head);
}

