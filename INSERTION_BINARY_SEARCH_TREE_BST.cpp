#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creatnode(int data)
{
       struct node *n;
       n=(struct node*)malloc(sizeof(struct node));
       n->data;
       n->left=NULL;
       n->right=NULL;
       return n;
}
void insert(struct node *root,int key)
{
    struct node *prev=NULL;
         prev=root;
         if(key==root->data)
         {
             cout<<"NEW NODE CAN NOT BE INSERT"<<key;
             return;
         }
         else if(key<root->data)
         {
            root=root->left;
         }
         else{
           root=root->right;
         }
    struct node *ptr=creatnode(key);
    if(key<prev->data)
    {
       prev->left=ptr;
    }else{
        prev->right=ptr;
    }
}
struct node*preorder(struct node*root)
{
     if(root!=NULL)
     {
          cout<<root->data;
          preorder(root->left);
          preorder(root->right);
     }
}


int main()
{
    struct node*p=creatnode(5);
     struct node*p1=creatnode(3);
     struct node*p2=creatnode(6);
     struct node*p3=creatnode(1);
     struct node*p4=creatnode(4);

   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
    insert(p,7);
  cout<<p->right->right->data;
 
}

