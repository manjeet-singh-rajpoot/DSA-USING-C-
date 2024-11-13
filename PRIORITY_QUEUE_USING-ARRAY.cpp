#include<iostream>
using namespace std;
struct priorityqueue
{
     int ele;
     int priority;
}pq[5];
int rear=-1;
int isempty()
{
      if(rear==-1){
        return 1;
      }else{
        return 0;
      }
}
int isfull()
{
      if(rear==4){
        return 1;
      }
      else{
        return 0;
      }
}
int display()
{
      for(int i=0;i<=rear;i++)
      {
          cout<<"element : "<<pq[i].ele<<endl;
          cout<<"priority: "<<pq[i].priority<<endl;
      }
}
int insert(int ele,int p)
{
       if(isfull()){
        cout<<"queue is full"<<endl;
       }
       else
       {
            rear=rear+1;
            pq[rear].ele=ele;
            pq[rear].priority=p;
       }
}
int gethighestpriority()
{
      int i,p=-1;
      if(!isempty())
      {
          for(i=0;i<=rear;i++)
          {
            if(pq[i].priority>p)
              p=pq[i].priority;
          }
      }
      return p;
}
int deletehighestpriority()
{
     int ele,i;
    int p=gethighestpriority();
    for(i=0;i<=rear;i++)
    {
          if(pq[i].priority==p)
          {
               ele=pq[i].ele; 
          }
    }
    if(i<rear)
    {
       for(int j=i;j<=rear;j++)
       {
           pq[j].ele=pq[j+1].ele;
           pq[j].priority=pq[j+1].priority;
       }
    }
    rear=rear-1;
    return ele;
}
int main()
{
      int ch,p,ele;
      cout<<"1.insert \n2.gethighestpriority\n 3.deletehighestpriority\n4.display\n5exit"<<"\n";
       do{
    cout<<"Enter your choice : "<<endl;
    cin>>ch;
    switch(ch)
    {
          case 1:
          {
              if(isfull()){
                cout<<"Queue is full"<<endl;
              }else{
                cout<<"Enter element for insertion : "<<endl;
                cin>>ele;
                cout<<"Enter priority :  "<<endl;
                cin>>p;
                insert(ele,p);
              }
          }
          break;

          case 2:
          {
              if(isempty())
              {
                cout<<"Queue is empty"<<endl;
              }else{
                p=gethighestpriority();
                cout<<"Highest priority is : "<<p<<endl;
              }
          }
          break;

          case 3:
          {
               if(isempty())
               {
                  cout<<"Queue is empty  "<<endl;
               } else{
                ele=deletehighestpriority();
                cout<<"delete highest priority is : "<<ele<<endl;
               }
          }
          break;
        case 4:
          if(isempty())
               {
                  cout<<"Queue is empty  "<<endl;
               } else{
                display();
               }
               break;
          case 5:
           cout<<"This is exit point "<<endl;  
           break;   
      }
 }while(ch!=5);
}