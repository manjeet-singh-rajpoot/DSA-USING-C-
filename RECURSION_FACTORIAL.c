#include<stdio.h>
int factorial(int number)
{
  if(number==1 || number==0)
{
       return 1; 
}else{
    return number*factorial(number-1);
}
}
int main()
{
    do{
      int num;
      printf("Enter number : ");
      scanf("%d",&num);
    printf("the value of %d is factorialis : %d\n",num,factorial(num));
}while(num!=4);
}