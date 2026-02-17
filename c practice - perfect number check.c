#include <stdio.h>
int main()
{
    int N,i,sum=0;
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        if(N%i==0){
            sum=sum+i;
        }
    }
    if(sum==N)
    printf("yes");
    else
    printf("no");
    return 0;
} 
