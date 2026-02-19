#include <stdio.h>
int main()
{
    int N, i;
    int amount;
    int total = 0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&amount);
        total=total+amount;
    }
    if(total>10000)
    {
        printf("Limit Exceeded");
    }
    else
    {
        printf("Approved");
    }
    return 0;
}
