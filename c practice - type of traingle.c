#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b && b==c)
        {
            printf("equilateral triangle");
        }
        else if(a==b||b==c||a==c)
        {
            printf("isosceles triangle");
        }
        else
        {
            printf("scalene triangle");
        }
    }
    else
    {
        printf("invalid triangle");
    }

    return 0;
}
