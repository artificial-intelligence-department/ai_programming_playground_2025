#include <cstdio>
#include <cmath>

int main() {

    double P;
    double r;
    double A;
    int t;
    int n;
    int option;

    printf("Enter your initial deposit(P): ");
    scanf("%lf", &P);

    printf("Enter annual interest rate (in %): ");
    scanf("%lf", &r);


    r = r/100.00;

    printf("Enter investment time (in years): ");
    scanf("%d", &t);

    printf("\nChoose interest compounding option: ");
    printf("\nYearly - 1\n");
    printf("\nQuarterly - 2\n");
    printf("\nMonthly - 3\n");
    scanf("%d", &option);

    switch(option) {
        case 1:
            n = 1;
        break;
        case 2:
            n = 4;
        break;
        case 3:
            n = 12;
        break;
        default:
            printf("\nEnter a valid number!");
        return 1;
    }

    A = P * pow(1 + r/n, n * t);

    printf("\n**********Deposit report**************\n");

    printf("\nYour initial deposit is: %.2lf\n", P);

    printf("Your interest rate: %.2lf%%\n", r * 100);

    printf("Your investment time (in years): %d\n", t);

    printf("Compounding: %s\n", (n == 12 ? "Monthly" : (n == 4 ? "Quarterly" : "Yearly")));

    printf("Final amount (A): %.2lf\n", A);

    printf("Your profit: %.2lf\n", A - P);

    printf("\n**************************************");
    
    return 0;
}


