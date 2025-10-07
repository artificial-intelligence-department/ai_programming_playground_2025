#include <stdio.h>
#include <math.h>

int main() {
    float P, r, n, t, A;

    printf("Enter amount of investment: ");
    scanf("%f", &P);

    printf("Enter annual interest rate: ");
    scanf("%f", &r);

    printf("Enter number of interest accruals per year: ");
    scanf("%f", &n);

    printf("Enter time of investment in years: ");
    scanf("%f", &t);

    r = r / 100;
    A = P * pow((1 + r / n), n * t);

    printf("Amount of money invested: %.2f\n", P);
    printf("Future value of investment: %.2f\n", A);
    printf("Amount of money gained: %.2f\n", A - P);

    return 0;
}