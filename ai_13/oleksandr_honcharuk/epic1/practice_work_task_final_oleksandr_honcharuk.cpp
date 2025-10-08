#include <stdio.h>
#include <math.h>

int main() {
    double a, p, r, n, t;
    printf("enter the value of principal amount (P): ");
    scanf("%lf", &p);
    printf("enter the value of rate of interest (r):");
    scanf("%lf", &r);
    printf("enter the value of time (t):");
    scanf("%lf", &t);
    printf("enter the value of number of times interest applied per time period (n):");
    scanf("%lf", &n);

    if (n == 0) {
        printf("Number of times interest applied per period (n) must be greater than 0!\n");
        return 1;
    }

    r = r / 100;
    a = p * pow((1 + r/n), n*t);
    printf("the amount after percentage is: %.2lf\n", a);
    return 0;
}