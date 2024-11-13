#include<stdio.h>
#include<stdlib.h>
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
int parenthmatch(char *exp)
{
       struct stack *sp;
       sp->size=100;
       sp->top=-1;
       sp->arr=(char*)malloc(sp->size*sizeof(char));
       char poped_ch;
    for(int i=0;exp[i]!='\0';i++)
    {
          if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
          {
               push(sp,exp[i]);
          }else if(exp[i]==')'||exp[i]=='}'||exp[i]=='}')
          {
              if(isempty(sp))
              {
                   return 0;
              }
              poped_ch=pop(sp);
              if(!match(poped_ch,exp[i])){
                return 0;
              }
          }
    }
    if(isempty(sp))
    {
        return 1;
    }else
    {
        return 0;
    }

}
int main()
{
    char *exp="{678}*(4+)45}";
    if(parenthmatch(exp))
    {
        printf("PARENTH IS MATCHING ");
    }
    else
    {
          printf("PARENTH IS NOT MATCHING");
    }
    return 0;
}