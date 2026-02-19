#include <stdio.h>
int main()
{
    int salary,absentDays;
    int i;
    scanf("%d",&salary);
    scanf("%d",&absentDays);
    for(i=1;i<=absentDays;i++)
    {
        salary=salary-100;
    }
    printf("Final Salary:₹%d",salary);
    return 0;
}
