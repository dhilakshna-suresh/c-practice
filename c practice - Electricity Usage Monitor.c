#include <stdio.h>
int main()
{
    int N,i;
    int units;
    int total=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&units);
        total=total+units;
    }
    printf("Total Units:%d",total);
    return 0;
}
