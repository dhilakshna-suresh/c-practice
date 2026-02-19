#include <stdio.h>
int main()
{
    int N,i;
    int fare;
    int total=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&fare);
        total=total+fare;
    }
   printf("Total Collection:₹%d",total);
    return 0;
}
