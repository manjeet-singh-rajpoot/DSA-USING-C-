 #include<iostream>
using namespace std;
int stack[100],top,x,i,choice,n;
int push();
int pop();
int display();
int main()
{
     top=-1;
    cout<<"Enter size of stack[100] :- "<<endl;
    cin>>n;
    cout<<"stack operation are :- "<<endl;
    cout<<"1.push() "<<endl;
    cout<<"2.pop() "<<endl;
    cout<<"3.display()"<<endl;
    cout<<"4.Exit"<<endl;
  do
  {
      cout<<"Enter your choice :- "<<endl;
      cin>>choice;
    switch(choice)
    {
        case 1:
        {
             push();
             break;
        }
        case 2:
        {
             pop();
             break;
        }
        case 3:
        {
             display();
             break;
        }
        case 4:
        {
             cout<<"this is Exit point "<<endl;
             break;
        }
        default:
        {
            cout<<"PLease Enter valid number :- "<<endl;
        }
    }
 }
 while(choice!=4);
 return 0;
}
int push()
{
    if(top>=n-1)
    {
        cout<<"stack is overflow "<<endl;
    }
    else
    {
        cout<<"Please Enter pushed Element :- "<<endl;
        cin>>x;
        top++;
        stack[top]=x;
        
    }
}
int pop()
{
    if(top<=-1)
    {
        cout<<"stack is underflow "<<endl;
    }
    else
    {
        cout<<"poped Element is :- "<<endl<<stack[top];
        top--;
    }
}
int display()
{
    if(top>=0)
    {
         cout<<"The stack Element is :- "<<endl;
        for(i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
    }
    else
    {
        cout<<"Stack is Already Empty "<<endl;
    }
}