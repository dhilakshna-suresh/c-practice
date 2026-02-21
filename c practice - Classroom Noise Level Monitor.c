#include <stdio.h>
int main()
{
    int n,x,max=0,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>max)
        max=x;
        if(x>70)
        count++;
    }
    printf("Maximum Noise:%d\n",max);
    printf("Noisy Periods:%d",count);
    return 0;
}