#include <stdio.h>
#include <math.h>

int main() {
    double P, r, n, t, A, res;
    
    printf("Compound Interest Calculator\n");
    printf("Formula: A = P * (1 + r/n)^(n*t)\n");
    
    printf("Enter the number of starting money (P): ");
    scanf("%lf", &P);
    
    printf("Enter annual interest rate (r) (enter 0.5 for 5%%): ");
    scanf("%lf", &r);
    
    printf("Enter profit of the percents (n): ");
    scanf("%lf", &n);
    
    printf("Enter time for which it will count, years (t): ");
    scanf("%lf", &t);
    
    res = 1 + r/n;
    A = P * pow(res, n*t);
    
    printf("\n--- Results ---\n");
    printf("Starting money: %.2f\n", P);
    printf("How much you now have: %.2f\n", A);
    printf("How much you earned: %.2f\n", A - P);
    
    return 0;
}


