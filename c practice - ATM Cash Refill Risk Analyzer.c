#include <stdio.h>
int main() {
    int initialCash,n;
    int withdrawal;
    int remainingCash;
    int riskCount=0;
    int i;

    scanf("%d",&initialCash);
    scanf("%d",&n);

    remainingCash=initialCash;

    for (i=0;i<n;i++) {
        scanf("%d", &withdrawal);
        remainingCash -= withdrawal;
        if (remainingCash<5000){
            riskCount++;
        }
    }
    printf("Remaining Cash:%d\n",remainingCash);
    printf("Risk Count:%d",riskCount);

    return 0;
}