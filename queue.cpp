#include<iostream>
#define n 5
using namespace std;
int main()
{
     int queue[n],rear=0,front=0,i,ch=1,j=1,x=n;
  while(ch)
  {
    cout<<"1.insertion "<<endl;
    cout<<"2.deletion"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<".........."<<endl;
    cout<<"Enter your choice :- "<<endl;
    cin>>ch;

    switch(ch)
    {
        case 1:
        {
            if(rear==x)
            {
                cout<<"queue is overflow "<<endl;
            }
            else
            {
                cout<<"Ensert element in queue "<<j++<<endl;
                cin>>queue[rear++];
            }
        }
        break;

        case 2:
        {
             if(front==rear)
             {
                cout<<"queue is Empty "<<endl;
             }
             else
             {
                 cout<<queue[front++];
                 x++;
             }
        }
        break;

        case 3:
        {
          if(front==rear)
          {
             cout<<"queue is Empty"<<endl;
          }
          else
          {
              for(i=front;i<rear;i++)
              {
                  cout<<queue[i]<<endl;
              }
          }
        }
        break;

        case 4:
        {
            cout<<"this is exit point "<<endl;
             exit;
             break;
        }
        default:
        cout<<"wrong choice please see option "<<endl;
    }
    }

  }

  

