#include <stdio.h>
int main() {
    int N,i;
    int rainfall;
    int total=0;
    int heavyDays=0;
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d",&rainfall);
        total = total+rainfall;

        if(rainfall>50) {
            heavyDays++;
        }
    }
    printf("Total Rainfall:%d\n",total);
    printf("Heavy Rain Days:%d",heavyDays);
    return 0;
}
