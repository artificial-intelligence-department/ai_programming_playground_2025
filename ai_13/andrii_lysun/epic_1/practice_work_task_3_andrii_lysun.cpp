#include <stdio.h>
#include <cmath>

int main()
{
    double p, a, d;
    float r;
    int n, t;

    printf("Investment sum: ");
    scanf("%lf", &p);

    printf("Annual rate (decimal): ");
    scanf("%f", &r);

    printf("Enter payout frequency (12, 4, 1): ");
    scanf("%d", &n);
    
    if (!(n == 1 || n == 4 || n == 12))
    {
        printf("\n[ERROR] Wrong value\n");
        return 1;
    }

    printf("Enter duration of the investment in years: ");
    scanf("%d", &t);

    a = p * pow(1 + r / n, n * t);
    d = a - p;

    printf("\nYou invested %.2lf\nInterest rate: %.2f for %d years, compounded %d times per year.\nThe result of the compound interest calculation: %.2lf\nYour income: %.2lf", p, r, t, n, a, d);
    return 0;
}