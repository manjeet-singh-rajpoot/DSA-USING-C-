#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
     int data;
     struct node*left;
     struct node*right;
};
struct node* createnode(int data)
{
      struct node *n;
      n=(struct node)malloc(sizeof(struct node));
      n->data=data;
      n->left=NULL;
      n->right=NULL;
      return n;
}
void preorder(struct node *root)
{
    if(root!=NULL){
      cout<<" "<<root->data;
      preorder(root->left);
      preorder(root->right);
}
}

int main()
{
     struct node *p= createnode(40);
     struct node *p2= createnode(30);
     struct node *p3= createnode(20);
     struct node *p4= createnode(10);
     struct node *p5= createnode(50);
    
    //      40
   //      /  \
//       30    20
//      /       \
//    10         50

    //linking //
    p->left=p2;
    p->right=p3;
    p2->left=p4;
    p3->right=p5;

    preorder(p);
}