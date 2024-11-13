#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*creatnode(int data)
{
      struct node *n;
      n=(struct node*)malloc(sizeof(struct node));
      n->data=data;
      n->left=NULL;
      n->right=NULL;
}
struct node *inorder(struct node*root)
{
      if(root!=NULL)
      {
          inorder(root->left);
          cout<<" "<<root->data;
          inorder(root->right);
      }
}
struct node *inorderpredeceser(struct node *root)
{
      root=root->left;
      while(root->right!=NULL)
      {
       root=root->right;
      }
      return root;
}
struct node *deletenode(struct node*root,int value)
{
      struct node *ipre;
      if(root==NULL)
      {
        return NULL;

      }
      if(root->left==NULL && root->right==NULL)
      {
          free(root);
          return NULL;
      }
   if(value<root->data){
    root->left=deletenode(root->left,value);
   }
   else if(value>root->data)
   {
      root->right=deletenode(root->right,value);
   }
   else{
    ipre=inorderpredeceser(root);
    root->data=ipre->data;
    deletenode(root->left,ipre->data);
   }
       return root;
}
int main()
{
      struct node *p=creatnode(5);
      struct node *p1=creatnode(3);
      struct node*p2=creatnode(6);
      struct node*p3=creatnode(1);
      struct node*p4=creatnode(4);
     
   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   
   inorder(p);
   deletenode(p,6);
   cout<<"\n";
   inorder(p);

}