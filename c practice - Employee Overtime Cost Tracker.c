#include <stdio.h>
int main()
{
    int n,x,total=0,cost,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        total=total+x;
        
        if(x>3)
        count++;
    }
    cost=total*200;
    printf("Total Overtime Houre:%d\n",total);
    printf("Overtime Cost:%d\n",cost);
    printf("Heavy Overtime Days:%d",count);
    return 0;
}