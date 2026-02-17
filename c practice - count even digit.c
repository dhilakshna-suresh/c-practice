#include <stdio.h>
int main()
{   
    int n,d,count = 0;
    printf("enter number: ");
    scanf("%d", &n);
    for(;n>0;n =n/10)
    {
        d=n%10;
        if(d%2==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
