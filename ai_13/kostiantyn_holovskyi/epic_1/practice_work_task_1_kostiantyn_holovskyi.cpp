#include <stdio.h>
#include <cmath>

int main(){
    double startCap, finalCap, diff;
    float annualRate;
    int time, payout;

    printf("Введіть основну суму інвестиції:\n");
    scanf("%lf", &startCap);
    printf("Введіть річну ставку у %%:\n");
    scanf("%f", &annualRate);
    annualRate /= 100;
    printf("Введіть час інвестиції в роках:\n");
    scanf("%d", &time);
    finalCap =  startCap * pow(1 + annualRate / payout, payout * time);
    diff = finalCap - startCap;
    annualRate *= 100;
    printf("Ви внесли %.2lf з %.2f%% річною ставкою і виплатами кожні %d місяців.\n Загальна сума %.2lf.\n Ви отримали %.2lf після %d років.", startCap, annualRate, payout, finalCap, diff, time);
    return 0;
}