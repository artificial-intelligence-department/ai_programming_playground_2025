#include <stdio.h>
#include <math.h>

int main() {
    double P, r, t, A, earnings ;
    int n;

    printf("Enter the deposit amount: ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate: ");
    scanf("%lf", &r);
    r = r/ 100;

    printf("Enter the term of the deposit in years: "); 
    scanf("%lf", &t);
    

    printf("Enter the number of interest compounding periods per year: ");
    scanf("%d", &n);

    A = P * pow(1 + r/(double)n, n*t);
    earnings = A - P;

    printf("Initial amount: %.2lf\n", P);
    printf("Total amount after %.2lf years: %.2f\n", t, A);
    printf("Interest earned: %.2lf\n", earnings);

    return 0;
}
