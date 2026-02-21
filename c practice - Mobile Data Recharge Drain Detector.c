#include <stdio.h>
int main()
{
    int n,x,data,days=0;
    scanf("%d",&data);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        data =data-x;
        if(data>=0)
        days++;
    }
    printf("Remaining Data:%d\n",data);
    printf("Successful Days:%d",days);
    return 0;
}