#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int highest=arr[0];
    int second=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>highest)
        {
            second=highest;
            highest=arr[i];
        }
    else if(arr[i]>second&&arr[i]!=highest)
    {
       second=arr[i]; 
    }
    }
    printf("%d",second);

    return 0;
}