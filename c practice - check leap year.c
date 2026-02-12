#include <stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if((year%4 && year!=100)||(year&400))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}