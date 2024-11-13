#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;
struct node
{
    int data;
    struct node*left;
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
void preorder(struct node *root)
{
    if(root!=NULL){
      cout<<" "<<root->data;
      preorder(root->left);
      preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<" "<<root->data;
    }
}
void inorder(struct node *root)
{
      if(root!=NULL)
      {
          postorder(root->left);
        cout<<" "<<root->data;
        postorder(root->right);
      }
}
int main()
{
    struct node *p=creatnode(50);
    struct node *p1=creatnode(40);
    struct node *p2=creatnode(30);
    struct node *p3=creatnode(20);
    struct node *p4=creatnode(10);

   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   cout<<"PREORDER IS : "<<endl;
   preorder(p);
   cout<<"\n";
   cout<<"POSTORDER IS : "<<endl;
   postorder(p);
   cout<<"\n";
   cout<<"INORDER IS : "<<endl;
   inorder(p);
}