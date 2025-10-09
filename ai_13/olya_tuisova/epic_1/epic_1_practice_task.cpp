#include <stdio.h>
#include <math.h>

int main(){
    double P, r, A;
    int t, n, choice;

    printf("Enter the investment amount: ");
    scanf("%lf", &P);

    printf("Enter the annual percentage rate (in %%): ");
    scanf("%lf", &r);
    r /= 100.0;

    printf("The time for which the money is invested, in years: ");
    scanf("%d", &t);

    printf("Accrual frequency:\n");
    printf("1 - monthly:\n");
    printf("2 - quarterly:\n");
    printf("3 - every year:\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        n = 12; // monthly
    } else if (choice == 2) {
        n = 4; // quarterly
    } else if (choice == 3) {
        n = 1; // yearly
    } else {
        printf("Invalid choice. Defaulting to yearly.\n");
        n = 1;
    }

    A = P * pow(1 + r / n, n * t);

    printf("\nResult\n");
    printf("Amount invested: %.2f \n", P);
    printf("Total investment amount: %.2f \n", A);
    printf("Earned profit: %.2f \n", A - P);

    return 0;
}
