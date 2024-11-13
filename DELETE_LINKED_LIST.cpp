#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void traversalLL(struct node *p)
{
      while(p!=NULL)
      {
          cout<<"Element : "<<p->data<<endl;
          p=p->next;
      }
}
struct node *deletefirst(struct node *head)
{
       struct node *ptr=head;
         head=head->next;
         free(ptr);
         return head;
}
struct node *deleteatbetween(struct node *head,int index)
{
       struct node *p=head;
       struct node *q= head->next;
       for(int i=0;i<=index-1;i++)
       {
           p=p->next;
           q=q->next;
       }
       p->next=q->next;
       free(q);
       return head;
}
struct node *deletelast(struct node*head)
{
      struct node *p=head;
      struct node *q=head->next;

  while(q->next!=NULL)
  {
      p=p->next;
      q=q->next;
  }
     p->next=NULL;
     free(q);
     return head;
}
struct node*deleteatvalue(struct node *head,int value)
{
       struct node *p=head;
       struct node *q=head->next;
       while(q->data==value && q->next!=NULL)
       {
           p=p->next;
           q=q->next;
       }
       if(q->data==value){
        p->next=q->next;
        free(q);
       }
        return head;
}
int main()
{
      struct node *head;
      struct node *second;
      struct node *third;
      struct node *fourth;
       //give memory at node
     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
   //connection node//
   //first node//
   head->data=65;
   head->next=second;
    //second node//
   second->data=66;
   second->next=third;
   //third node//
   third->data=67;
   third->next=fourth;
   //fourth node//
   fourth->data=68;
   fourth->next=NULL;
cout<<"BEFORE DELETION first: "<<endl;
    traversalLL(head);
cout<<"AFTER DELETION first: "<<endl;
head=deletefirst(head);
 traversalLL(head); 
 cout<<"delete after index : "<<endl;
 head=deleteatbetween(head,1);
 traversalLL(head); 
cout<<"delete last node : "<<endl;
 head=deletelast(head);
 traversalLL(head);
  cout<<"delete at value : "<<endl;
head=deleteatvalue(head,68 );
traversalLL(head);

//cout<<"AFTER INSERTION first: "<<endl;
 // head=insertatfirst(head,44);
//  traversalLL(head);
 //head=insertatatend(head,47);
//cout<<"insert at end : "<<endl;
 //traversalLL(head);
// head=insertatindex(head,1,89);
//cout<<"insert at between : "<<endl;
//traversalLL(head);
//head=insertatafternode(head,second,68);
//cout<<"insert at afternode:  "<<endl;
//traversalLL(head);
}