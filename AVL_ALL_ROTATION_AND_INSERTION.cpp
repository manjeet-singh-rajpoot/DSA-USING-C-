#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node*right;
    int hight;
};
struct node *creatnode(int key)
{
      struct node *n;
      n=(struct node*)malloc(sizeof(struct node));
      n->data=key;
      n->left=NULL;
      n->right=NULL;
      n->hight=1;
      return n;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int gethieght(struct node*n)
{
      if(n==NULL)
      {
        return 0;
      }   
      return n->hight;
}
int Balancefactor(struct node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    return gethieght(n->left)-gethieght(n->right);
}
struct node*rightrotate(struct node *y)
{
     struct node*x=y->left;
     struct node *T2=x->right;

     x->right=y;
     y->left=T2;

  y->hight=max(gethieght(y->right),gethieght(y->left))+1;
  x->hight=max(gethieght(x->right),gethieght(x->left))+1;
  return x;
}
struct node*leftrotate(struct node *x)
{
     struct node*y=x->right;
     struct node *T2=y->left;

    y->left=x;
    x->right=T2;

  y->hight=max(gethieght(y->right),gethieght(y->left))+1;
  x->hight=max(gethieght(x->right),gethieght(x->left))+1;
  return x;
}
struct node *insert(struct node *n,int data)
{
    if(n==NULL)
    {
        return (creatnode(data));
    }
    if(data<n->data)
    {
        n->left=insert(n->left,data);
    }
    else if(data>n->data)
    {
        n->right=insert(n->right,data);
    }
    return n;
    n->hight=1+max(gethieght(n->left),gethieght(n->right));
    int bf=Balancefactor(n);

//left left rotation//
     if(bf>1 && data<n->left->data)
     {
           return rightrotate(n);
     }
    //right right rotation
      if(bf<-1 && data>n->right->data)
     {
          return leftrotate(n);
     }
     //left right rotation
   if(bf>1 && data>n->left->data)
   {
         n->left=leftrotate(n->left);
         return rightrotate(n);
   }
   //right left rotation 
   if(bf<-1 && data<n->right->data)
{

        n->right=rightrotate(n->right);
       return leftrotate(n);
}
return n;
}
struct node *preorder(struct node *root)
{
        if(root!=NULL)
        {
             cout<<" "<<root->data;
             preorder(root->left);
             preorder(root->right) ;  
        }
}
int main()
{
    struct node*root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,40);
    root=insert(root,50);
    preorder(root);
    return 0;
}
