#include <cstdio>
#include <cmath>

int main() {
    double P, r, t;   
    int choice, n;    

    printf("Enter the principal amount: ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (%%): ");
    scanf("%lf", &r);

    printf("Choose compounding period:\n");
    printf(" 1 - monthly\n 2 - quarterly\n 3 - yearly\n");
    scanf("%d", &choice);

    if (choice == 1)      n = 12;
    else if (choice == 2) n = 4;
    else                  n = 1;

    printf("Enter time in years: ");
    scanf("%lf", &t);

    double r_dec = r / 100.0;                      
    double A = P * pow(1.0 + r_dec / n, n * t);    

    printf("\nFuture Value: %.2f\n", A);
    printf("Earnings you will have:     %.2f\n", A - P);

    return 0;
}
