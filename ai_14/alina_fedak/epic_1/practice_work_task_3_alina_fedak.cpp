#include <stdio.h>
#include <math.h>

int main() {
    double P, r, t, A;
    int option, n;

    printf("Enter the deposit amount (P): \n");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (in %%): \n");
    scanf("%lf", &r);
    r = r / 100.0;

    printf("Enter the deposit term (in years): \n");
    scanf("%lf", &t);

    printf("Choose an interest accrual option:\n");
    printf("1 - monthly\n");
    printf("2 - seasonly\n");
    printf("3 - annually\n");
    printf("Your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            n = 12;
            break;
        case 2:
            n = 4;
            break;
        case 3:
            n = 1;
            break;
        default:
            printf("Wrong option. Annual accrual is used.\n");
            n = 1;
    }

    A = P * pow(1 + r / n, n * t);
    double profit = A - P;

    printf("\n--- Results ---\n");
    printf("Input depossit amount: %.2f hryvnias\n", P);
    printf("General amount of all investitions: %.2f hryvnias\n", A);
    printf("General income (percentage): %.2f hryvnias\n", profit);

    return 0;
}