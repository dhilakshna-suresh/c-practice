#include <stdio.h>

int main()
{
    int n,x,i=0;
    int count=0,max=0;
   
    scanf("%d",&n);

    while(i<n)
    {
        scanf("%d",&x);
       
        if(x==0)
         count++;
        else
         count=0;
         
        if(count>max)
        max=count;
    i++;
    }
   
    printf("longest failure streak:%d",max);
   
   
    return 0;
}