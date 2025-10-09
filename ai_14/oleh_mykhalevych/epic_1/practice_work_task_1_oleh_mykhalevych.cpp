#include <cstdio>
#include <cmath>

int main() {
    double P, r, A, profit;
    int n, t, choice;

    printf("Choose interest payment frequency:\n");
    printf("1 - Monthly\n");
    printf("2 - Quarterly\n");
    printf("3 - Yearly\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: n = 12; break;   
        case 2: n = 4; break;    
        case 3: n = 1; break;    
        default:
            printf("You entered invalid value\n");
            return 1;
    }

    printf("Enter the principal amount: ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (0.05 for 5%): ");
    scanf("%lf", &r);

    printf("Enter the investment period (years): ");
    scanf("%d", &t);

    A = P * pow((1 + r / n), n * t);
    profit = A - P;

    printf("Initial amount: %.3f UAH\n", P);
    printf("Annual interest rate: %.3f%\n", r * 100);
    printf("Investment period: %d years\n", t);
    printf("Compounding periods per year: %d\n", n);
    printf("Total amount with interest: %.3f UAH\n", A);
    printf("Profit earned: %.3f UAH\n", profit);

    return 0;
}
