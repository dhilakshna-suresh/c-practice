#include <stdio.h>
int main() {
    int n,i;
    int voltage;
    int minVoltage;
    int lowVoltageCount = 0;
    scanf("%d",&n);
    scanf("%d",&voltage);
    minVoltage=voltage;
    if (voltage<210){
        lowVoltageCount++;
    }
    for (i=1;i<n;i++){
        scanf("%d",&voltage);

        if (voltage<minVoltage){
            minVoltage=voltage;
        }

        if (voltage<210) {
            lowVoltageCount++;
        }
    }
    printf("Minimum Voltage:%d\n",minVoltage);
    printf("Low Voltage Events:%d",lowVoltageCount);
    return 0;
}