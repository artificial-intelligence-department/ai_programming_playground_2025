#include <stdio.h>
#include <math.h>

int main() {
    double Amount = 0, Profit = 0, Rate = 0;
    int Invested = 0, Time = 0, C_per_year = 0;

    printf("Enter values for: Invested money, annual interest rate, num. of compounds per year, time:");
    scanf("%d %lf %d %d", &Invested, &Rate, &C_per_year, &Time);
    Rate /= 100;
    Amount = Invested * pow(1 + Rate/C_per_year, C_per_year*Time);
    Profit = Amount - Invested;

    printf("You invested %d at an annual interest rate of %.2lf%%, compounded %d times per year for %d years.\n", Invested, Rate * 100, C_per_year, Time);
    printf("Total amount: %.2lf\n", Amount);
    printf("Profit earned: %.2lf\n", Profit);
    return 0;
}