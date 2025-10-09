#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double P, r, t, A;
    int n;
    printf("Enter the initial amount (P): ");
    scanf("%lf", &P);
    printf("Enter the annual interest rate (in percent): ");
    scanf("%lf", &r);
    printf("Enter the number of years: ");
    scanf("%lf", &t);
    printf("Choose interest payment option:\n");
    printf("1 - Monthly\n");
    printf("2 - Quarterly\n");
    printf("3 - Yearly\n");
    scanf("%d", &n);
    if (n == 1) {
        n = 12;
    } else if (n == 2) {
        n = 4;
    } else {
        n = 1;
    }
    A = P * pow((1 + r / n), n * t);
    double profit = A - P;
    printf("\n--- Deposit Details ---\n");
    printf("Initial amount: %.2lf\n", P);
    printf("Annual interest rate: %.2f%%\n", r * 100);
    printf("Period (years): %.1lf\n", t);
    printf("Final amount: %.2lf\n", A);
    printf("Total profit: %.2lf\n", profit);
    return 0;
}
