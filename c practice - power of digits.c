#include <stdio.h>
int main()
{   
    int n,p,i;
    int result=1;
    scanf("%d %d",&n,&p);
    for(i=1;i<=p;i++)
    {
        result=result*n;
    }
    printf("%d",result);
    return 0;
}