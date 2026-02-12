#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("Uppercase Letter");
    }
    else if(ch='a' && ch<='z')
    {
        printf("lowercase letter");
    }           
    else
    {
        printf("not an alphabet");
    }
    return 0;
}