#include <stdio.h>
int main()
{
    int N,i,j,count=0,flag;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            count++;
        }
    }
       printf("%d",count);
    return 0;
} 