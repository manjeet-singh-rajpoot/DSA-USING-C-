
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr)
{
     if(ptr->top==-1)
     {
        return 1;
     }
     else
     {
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
char stacktop(struct stack *sp)
{
      return sp->arr[sp->top];
}
int match(char a,char b)
{
     if(a=='{' && b=='}')
     {
        return 1;
     }
      if(a=='(' && b==')')
     {
        return 1;
     }
      if(a=='[' && b==']')
     {
        return 1;
     }
     return 0;
}
int precedence(char ch)
{
     if(ch=='*' || ch=='/')
     {
        return 3;
     }
    else if(ch=='+' || ch=='-'){
        return 2;
     }else{
        return 0;
     }
}
int isoperator(char ch)
{
      if(ch=='+' || ch=='-' || ch=='*' ||ch=='/'){
        return 1;
      }else{
        return 0;
      }
}
void push(struct stack *ptr,char val){
       if(isfull(ptr)){
        printf("STACK IS OVERFLOW\n",val);
       }
      ptr->top++;
      ptr->arr[ptr->top]=val; 
}
char pop(struct stack *ptr)
{
         if(isempty(ptr))
         {
            printf("STACK IS UNDERFLOW");
            return -1;
         }
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
}
char * infix_to_postfix(char *infix)
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
   char *postfix=(char*)malloc(strlen(infix)+1*sizeof(char));
    int i=0;//initialize infix
    int j=0;//initialize postfix
while(infix[i]!='\0')
{
      if(!isoperator(infix[i]))
      {
        postfix[j]=infix[i];
        j++;
        i++;
      }
      else{
        if(precedence(infix[i])>precedence(stacktop(sp))){
            push(sp,infix[i]);
            i++;
        }
        else
        {
            postfix[j]=pop(sp);
            j++;
        }
      }
}
while(!isempty(sp))
{
    postfix[j]=pop(sp);
    j++;
}
postfix[j]='\0';
return postfix;
}
int main()
{
     char*infix;
     printf("Enter infix expression : ");
     scanf("%s",&*infix);
     infix=infix_to_postfix(infix);
     printf("postfix expression is : %s",infix);
}