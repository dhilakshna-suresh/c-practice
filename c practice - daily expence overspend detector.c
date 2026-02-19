#include <stdio.h>
int main()
{
    int N, i;
    int expense;
    int total = 0;
    int overspend = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &expense);
        total = total + expense;
        if(expense > 1000)
        {
            overspend++;
        }
    }
    printf("Total Expense: %d\n", total);
    printf("Overspend Days: %d", overspend);
    return 0;
}
