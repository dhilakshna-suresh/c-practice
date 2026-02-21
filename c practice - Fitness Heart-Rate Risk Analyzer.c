#include <stdio.h>
int main() {
    int n,i;
    int hr;
    int maxHR;
    int dangerCount=0;
    scanf("%d",&n);
    scanf("%d",&hr);
    maxHR=hr;
    if (hr>140) {
        dangerCount++;
    }
    for (i=1;i<n;i++) {
        scanf("%d",&hr);
        if (hr>maxHR) {
            maxHR=hr;
        }
        if (hr>140) {
            dangerCount++;
        }
    }
    printf("Max Heart Rate:%d\n",maxHR);
    printf("Danger Readings:%d",dangerCount);
    return 0;
}