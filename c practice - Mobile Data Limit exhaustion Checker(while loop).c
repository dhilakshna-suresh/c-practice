#include <stdio.h>
int main()
{
    int n,i=0;
    int totalData,usage;
    int daysUsed=0;

    scanf("%d",&totalData);
    scanf("%d",&n);           

    while (i<n && totalData>0)
    {
        scanf("%d",&usage);

        totalData=totalData-usage;
        daysUsed++;
        i++;
    }
    if (totalData < 0)
        totalData = 0;
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB", totalData);
    return 0;
}