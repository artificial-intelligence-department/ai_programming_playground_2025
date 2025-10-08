#include <stdio.h>
#include <cmath>

using namespace std;

int main(){

    double n, P, r, t, A;

    printf("Enter a type of interest calculation (where n = 1 - every year, n = 4 - every quarter, n = 12 - every month), invested funds, interest rate and period:\n");
    scanf("%lf %lf %lf %lf", &n, &P, &r, &t);
    A = P * pow(1+r/n, n*t);
    double profit = A - P;
    printf("Invested funds: %.2f\n", P);
    printf("Total amount of investment: %.2f\n", A);
    printf("Profit: %.2f\n", profit);

    return 0;
}