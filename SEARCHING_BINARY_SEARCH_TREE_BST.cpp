#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creatnode(int data)
{
   struct node *n;
   n=(struct node*)malloc(sizeof(struct node));
   n->data=data;
   n->left=NULL;
   n->right=NULL;
   return n;
}
struct node *search(struct node *root,int key){
    if(root==NULL)
    {
        return NULL;
    }
     if(key==root->data)
    {
        return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}
struct node *preorder(struct node *root)
{
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
 
    struct node* n=search(p,4);
    if(n!=NULL){
    cout<<"found: "<<n->data;
}else{
    cout<<"NOT FOUND";
}
cout<<"\n";
cout<<"PREORDER : ";
preorder(p);
}

