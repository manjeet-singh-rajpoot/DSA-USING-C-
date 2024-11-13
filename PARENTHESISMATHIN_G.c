#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr)
{
     if(ptr->top==-1){
        return 1;
     }else{
        return 0;
     }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *ptr,char data)
{
      if(isfull(ptr)){
       printf("overflow");
      }
      ptr->top++;
      ptr->arr[ptr->top]=data;
}
char pop(struct stack *ptr)
{
        if(isempty(ptr)){
          printf("empty");
        }
        int data=ptr->arr[ptr->top];
        ptr->top--;
        return data;
}
int match(char a,char b)
{
      if(a=='(' && b==')'){
        return 1;
      }
      if(a=='{' && b=='}'){
        return 1;
      }
      if(a=='[' && b==']'){
        return 1;
      }
      return 0;
      
}
int parenthesismatch(char *exp){
     struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
     sp->size=100;
     sp->top=-1;
     sp->arr=(char*)malloc(sp->size*sizeof(char));
    
char poped_ch;
for(int i=0;exp[i]!='\0';i++)
{
    if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
    {
        push(sp,exp[i]);
    }

    else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
    {
        if(isempty(sp))
          {
         return 0;
          }
        poped_ch=pop(sp);
        
        if(!match(poped_ch,exp[i]))
        {
            return 0;
        }
        if(isempty(sp))
        {
            return 1;
        }else
        {
            return 0;
        }
    }
  }
}
int main()
{
      char *exp="8*(4-2)*(4-2";
      if(parenthesismatch(exp)){
        printf("parenthesis is matching ");
      }
      else{
        printf("Parenthesis is not mathing");
      }
}