#include <stdio.h>
#include <math.h>

int main() {
    int dep = 0;
    double rate = 0;
    int time = 0;

    printf("Deposited sum: ");
    scanf("%d", &dep);

    printf("Interest rate (%%): ");
    scanf("%lf", &rate);

    printf("Amount of time (years): ");
    scanf("%d", &time);

    if (dep < 0 || rate < 0 || rate > 100 || time < 0) {
        printf("Неправильні введені дані\n");
        return 1;
    }

    rate = rate / 100.0;
    double final = dep * pow(1 + rate, time);
    printf("Final sum: %.2f\n", final);
    printf("Profit: %.2f\n", final - dep);

    printf("Payments:\n");
    printf("Monthly: %.2f\n", (final - dep) / (time * 12));
    printf("Quarterly: %.2f\n", (final - dep) / (time * 4));
    printf("Yearly: %.2f\n", (final - dep) / time);

    return 0;
}
