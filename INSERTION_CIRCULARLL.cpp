#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void traveesal(struct node *head)
{
     struct node *ptr=head;
       do{
            cout<<"Element : "<<ptr->data<<endl;
         ptr=ptr->next;
       }while(ptr!=head);
}
  struct node*insertatfirst(struct node *head,int data)
  {
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        struct node *p=head->next;
      while(p->next!=head)
      {
           p=p->next;
      }
      p->next=ptr;
       ptr->next=head;
       head=ptr;
       return head;
  }
  struct node*insertatbetween(struct node *head,int data,int index)
  {
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        struct node *p=head;
     for(int i=0;i<=index-1;i++)
     {
         p=p->next;
     }
       ptr->next=p->next;
       p->next=ptr;
       return head;
  }
   struct node *insertatatend(struct node *head,int value)
   {
       struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=value;
        struct node*p=head;
        struct node *q=head->next;
        while(q->next!=p)
        {
           p=p->next;
        }
        ptr->next=head;
         p->next=ptr;
        return head;
   }
  struct node *insertatafternode(struct node *head,int value,struct node *q)
  {
       struct node *ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=value;
      struct node *p=head;
       ptr->next=p->next;
       p->next=ptr;

       return head;
  }

int main()
{
    struct node *head;
    struct node *second;
    struct node*third;
    struct node *forth;

    head=(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));

    //connection/
    head->data=20;
    head->next=second;

    second->data=30;
    second->next=third;

    third->data=40;
    third->next=forth;

    forth->data=50;
    forth->next=head;
cout<<"before insertion : "<<endl;
    traveesal(head);
    cout<<"After insertion : "<<endl;
    head=insertatfirst(head,10);
     traveesal(head);
  //  cout<<"before insert at between : "<<endl;
    //head=insertatbetween(head,25,1);
    //traveesal(head);
   // cout<<" insert at afternode : "<<endl;
      //head=insertatafternode(head,10,second);
      // traveesal(head); 
   //cout<<"after insertion at end : "<<endl;   
   //head=insertatatend(head,10);
    //traveesal(head);
}