#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
    int data;
    struct node *right;
    struct node *left;
};
struct node* creatnode(int data)
{
      struct node *n=(struct node *)malloc(sizeof(struct node));;
      n->data=data;
      n->left=NULL;
      n->right=NULL;
      return n;
}
struct node* insert(struct node *root,int key){
    struct node *prev;
    prev=root;
    if(key==root->data)
    {
         return root;
    }else if(key<root->data){
        root=root->left;
    }
    else{
        root=root->right;
    }
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=key;
    if(key<root->data)
    {
         root->left=n;
    }else{
        root->right=n;
    }
}
int preorder(struct node *root){
    if(root!=NULL)
    {
         cout<<" "<<root->data;
         preorder(root->left);
         preorder(root->right);
    }
}
int main()
{
      struct node *p=creatnode(5);
      struct node *p1=creatnode(3);
      struct node *p2=creatnode(6);
      struct node *p3=creatnode(1);
      struct node*p4=creatnode(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
     preorder(p);
     cout<<"\n";
  insert(p,8);
  cout<<p->right->data;
  cout<<"\n";
   preorder(p);
}