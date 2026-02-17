#include <stdio.h>
int main()
{
    int n,r,sum=0,p=1;
    scanf("%d",&n);
    while(n)
    {
    r=n%10;
    sum=sum+r*p;
    p=p*2;
    n=n/10;
    }
    printf("%d",sum);
    return 0;
} 