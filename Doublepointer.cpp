#include<iostream>
#include<stdlib.h>   //reference variable//
using namespace std;
int main()
{
    int i=5;
   int *p=&i;
   int **p2=&p;
    int &j=i;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    i++;
   cout<<i<<endl;
}