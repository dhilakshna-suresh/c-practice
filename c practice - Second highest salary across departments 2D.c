#include<stdio.h>

int main()
{
    int n,a[100],i;
    int first=0,second=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] != first)
        {
            second = a[i];
        }
    }

    printf("%d",second);

    return 0;
}