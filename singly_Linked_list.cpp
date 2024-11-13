#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
     int data;
     struct node *link;
};
void displayLL(struct node *p)
{
    if(p)
    {
        do
        {
           cout<<p->data<<endl;
           p=p->link;
        }while(p);
    }else
    {
        cout<<"LINKED LIST IS EMPTY";
    }
}
int main()
{
    struct node *pnode1;
    struct node *pnode2;
    struct node *pnode3;

    //creat node 
   pnode1=(struct node*)malloc(sizeof(struct node*));
    pnode1->data=100;

  pnode2=(struct node*)malloc(sizeof(struct node*));
    pnode2->data=200;

 pnode3=(struct node*)malloc(sizeof(struct node*));
   pnode3->data=300;

  //connect node

  pnode1->link=pnode2;
  pnode2->link=pnode3;
  pnode3->link=NULL;

if(pnode1)
  displayLL(pnode1);








}