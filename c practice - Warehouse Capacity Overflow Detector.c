#include <stdio.h>
int main()
{
    int n,x,capacity,overflow=0;
    scanf("%d",&capacity);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        capacity=capacity-x;
        
        if(capacity<0)
        overflow++;
    }
    printf("Remaining Capacity:%d\n",capacity);
    printf("Overflow Days:%d",overflow);
    return 0;
}