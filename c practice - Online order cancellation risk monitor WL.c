#include <stdio.h>
int main()
{
    int n,x,i=0;
    int cancel=0,success=0;
   
    scanf("%d",&n);

    while(i<n)
    {
        scanf("%d",&x);
       
        if(x==1)
         success++;
        else
         cancel=0;
    i++;
    }
   
    printf("successful:%d\n",success);
    printf("cancelled:%d\n",cancel);
   
    if(cancel>success)
    printf("status:risk");
    else
    printf("status:safe");
   
   
    return 0;
}