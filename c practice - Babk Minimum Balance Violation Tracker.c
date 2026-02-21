#include <stdio.h>
int main()
{
    int n,i=0;
    int balance,transaction,low=0;
    scanf("%d",&n);
    scanf("%d",&balance);
    while(i<n)
    {
        scanf("%d",&transaction);
        balance=balance+transaction;
        
        if(balance<2000)
        low++;
        i++;
    }
    printf("final balance:%d\n",balance);
    printf("low balance days:%d",low);
    return 0;
}