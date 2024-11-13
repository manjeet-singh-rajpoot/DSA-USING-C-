#include<iostream>
#include<stdlib.h>
using namespace std;
struct myarray
{
       int total_size;
       int used_size;
       int *ptr;
};
 void creatarray(struct myarray * a,int tsize,int usize)
 {
       // (*a).total_size=tsize;
       // (*a).used_size=usize;
       // (*a).ptr=(int *)malloc(tsize *sizeof(int));
       a->total_size=tsize;
       a->used_size=usize;
       a->ptr=(int *)malloc(tsize * sizeof(int));
 }
 int show(struct myarray *a)
 {
     cout<<"show value : - "<<endl;
       for(int i=0;i<=a->used_size;i++)
       {
           cout<<a->ptr[i]<<endl;
       }
 }
 int setval(struct myarray *a)
 {
    int n;
       for(int i=0;i<=a->used_size;i++)
       {
           cout<<"enter aray element= "<< i <<endl;
            cin>>n;
            a->ptr[i]=n;
       }
 }

int main()
{ 
     struct myarray marks;
     creatarray(&marks,10,5);
     cout<<"we are setting the value = "<<endl;
     setval(&marks);
     cout<<"we are showing the value = "<<endl;
     show(&marks);

     return 0;

} 