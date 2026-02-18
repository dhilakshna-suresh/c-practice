#include <stdio.h>
int main()
{
    int n, original, rem, sum = 0;
    scanf("%d", &n);
    original = n;
    for(; n > 0; n = n / 10)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
    }
    if(sum == original)
        printf("Yes");
    else
        printf("No");
    return 0;
}