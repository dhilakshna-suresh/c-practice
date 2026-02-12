#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==25)
    {
        printf("25 is largest");
    }
    else if(n==10 && n==15)
    {
        printf("10 is lowest");
    }           
    else
    {
        printf("none");
    }
    return 0;
}