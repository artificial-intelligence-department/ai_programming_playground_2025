#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
    double A, P, r, n, t;
    printf("Enter the time of investment in years:\n");
    scanf("%lf", &t);
    printf("Enter the annual interest rate (in decimal form, e.g. 5%% = 0.05):\n");
    scanf("%lf", &r);
    printf("Enter the number of compounding periods per year:\n");
    scanf("%lf", &n);
    printf("Enter the principal amount of investment:\n");
    scanf("%lf", &P);
    A = P * pow((1 + (r / n)), n * t);
    printf("Initial investment: %.2lf\n", P);
    printf("Future value of the investment (with interest): %.2lf\n", A);
    printf("Total earnings: %.2lf\n", A - P);
    return 0;
}
