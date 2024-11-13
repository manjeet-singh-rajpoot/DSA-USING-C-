#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node *next;
};

static void display(struct node *head){
   struct node *p=head;

    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}


struct node *createnode(struct node *p,int data){
     node *newnode=(node*)malloc(sizeof(struct node));
         newnode->data=data;
         newnode->next=NULL;

   return newnode;
}
struct node *insertatfirst(struct node *head,int data){

    node*temp=(node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;

    return temp;    

}
struct node *insertatlast(struct node *head,int data){
    node *temp=(node*)malloc(sizeof(struct node));
     temp->data=data;
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    } 
    p->next=temp;
    temp->next=NULL;
    return head;
   
}
int main()
{
 struct node *head;
 struct node *second;
 struct node*third;

 head=createnode(head,50);
 second=createnode(second,60);
 third=createnode(third,70);

 head->next=second;
 second->next=third;
 third->next=NULL;
 cout<<"Before insertionat first: "<<endl;
 display(head);   

cout<<endl;
cout<<"After insertionatfirst: "<<endl;
head=insertatfirst(head,40);
display(head);

cout<<endl;
cout<<"After insertionatlast: "<<endl;
head=insertatlast(head,80);
display(head);

    return 0;
}