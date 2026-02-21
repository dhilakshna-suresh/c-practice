#include <stdio.h>
int main() {
    int n, i;
    int score;
    int totalRisk = 0;
    int highRiskCount = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &score);
        totalRisk += score;
        if (score > 50) {
            highRiskCount++;
        }
    }
    printf("Total Risk: %d\n", totalRisk);
    printf("High Risk Sessions: %d", highRiskCount);
    return 0;
}