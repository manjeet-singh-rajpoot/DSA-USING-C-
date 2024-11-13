#include<stdio.h>
#define n 5
int main()
{
    int queue[n],ch=1,rear=0,front=0,i,j=1,x=n;
    printf("queue using array \n");
    printf("1.insertion \n2.deletion \n3display \n4.exit\n");
    while(ch)
    {
    printf("\nEnter your choice :- \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        if(rear==x)
        {
             printf("queue is overflow \n");
        }
        else
        {
            printf("Enter number %d = ",j++);
            scanf("%d",&queue[rear++]);
        }
      break;
      case 2:
      {
        if(front==rear)
        {
            printf("\n queue is enmty ");
        }
        else
        {
          printf("delete element is = %d ",queue[front++]);
          x++;
        }
      }
      break;

      case 3:
      {
          if(front==rear)
          {
            printf("queue is empty \n");
          }
          else
          {
             for(i=front;i<rear;i++)
             {
                printf("%d",queue[i]);
                printf("\n");
             }
          }
          
      }
      break;

      case 4:
      printf("this is exit point \n");
      break;

      default:
      printf("wrong choice pleese see the option :- \n");
    }
    }
}