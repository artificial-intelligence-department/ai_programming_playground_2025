#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    double P, r, t; 
    int n;           

    printf("Enter the initial deposit (P): ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (r in percent): ");
    scanf("%lf", &r);
    r = r / 100.0; 

    printf("Enter the investment period in years (t): ");
    scanf("%lf", &t);

    printf("Enter the number of times interest is compounded per year (1=yearly, 4=quarterly, 12=monthly): ");
    scanf("%d", &n);

    
    double A = P * pow(1 + r / n, n * t);
    double profit = A - P;

    printf("Initial deposit: %.2f\n", P);
    printf("Annual rate: %.2f%%\n", r * 100);
    printf("Investment period: %.1f years\n", t);
    printf("Compounding per year: %d\n", n);
    printf("Total amount after %.1f years: %.2f\n", t, A);
    printf("Total profit: %.2f\n", profit);

    return 0;
}
