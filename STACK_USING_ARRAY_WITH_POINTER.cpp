#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack
{
      int size;
      int top;
      int *arr;
};
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
       return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr)
{
       if(ptr->top==ptr->size-1)
       {
             return 1;
       }
       else{
        return 0;
       }
}
int push(struct stack *ptr,int val)
{
        if(isfull(ptr))
        {
            cout<<"OVERFLOW "<<endl;
        }
        ptr->top++;
        ptr->arr[ptr->top]=val;
}
int pop(struct stack *ptr)
{
      if(isempty(ptr))
      {
          cout<<"UNDERFLOW"<<endl;
          return -1;
      }
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val; 
}
int peek(struct stack *ptr,int i)
{
      int arrayind=ptr->top-i+1;
   if(arrayind<0)
   {
       cout<<"not valid value"<<endl;
       return -1;
   }
   return ptr->arr[arrayind];
}
int stacktop(struct stack *ptr)
{
      return ptr->arr[ptr->top];
} 
int stackbottom(struct stack *ptr)
{
      return ptr->arr[0];
}
int main()
{
      struct stack *s=(struct stack*)malloc(sizeof(struct stack));
       s->size=6;
       s->top=-1;
       s->arr=(int*)malloc(s->size*sizeof(int));
      cout<<"before any operation "<<endl;
     // isempty(s);
      //isfull(s);
      cout<<"pushing element : "<<endl;
     cout<<push(s,45)<<endl;
      cout<<push(s,46)<<endl;
     cout<< push(s,47)<<endl;
      cout<<push(s,48)<<endl;
      cout<<push(s,49)<<endl;
      cout<< push(s,49)<<endl;
     isempty(s);
      //isfull(s);
     // pop(s);
     //isempty(s);
    //  isfull(s); 

//for(int j=0;j<s->top+1;j++)
//{
  //  cout<<"position : "<<j<<endl<<peek(s,j)<<endl;
//}
 //cout<<"stack topmost element : "<<stacktop(s)<<endl;
  //cout<<"stack bottommost element : "<<stackbottom(s);
  
}