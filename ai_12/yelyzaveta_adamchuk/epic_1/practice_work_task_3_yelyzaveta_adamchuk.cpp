#include <cstdio>

     //calculation of A value
void Calculations(int n, double r, double P, double t) {
    double r_decimal = r / 100.0;
    double firstValue = 1 + r_decimal / n;
    for (int i = 0; i < n*t; i++) 
    {
        firstValue = firstValue*firstValue;
    }
    double A = P * firstValue;

    printf("Total investment amount (including interest): %.2lf\n", A);
    printf("Earnings from interest: %.2lf\n", A - P);
}

int main() {
    double InvestedSum;
    double YearPercent;
    int UserChoice;
    double TimeForInvestment;

    //get the infos
    printf("Write the principal amount of the investment:\n");
    scanf("%lf", &InvestedSum);

    printf("Write annual interest rate (in %%):\n");
    scanf("%lf", &YearPercent);

    printf("Write the time in years you invest for:\n");
    scanf("%lf", &TimeForInvestment);

    printf("Choose the wished number of interest payments per year:\n");
    printf("1 - monthly (12 times per year)\n");
    printf("2 - quarterly (4 times per year)\n");
    printf("3 - yearly (1 time per year)\n");
    scanf("%d", &UserChoice);

    //show the infos printing only 2 nums after point
    printf("Principal amount: %.2lf\n", InvestedSum);
    printf("Annual interest rate: %.2lf%%\n", YearPercent);
    printf("Time of investment: %.2lf years\n", TimeForInvestment);
    printf("Number of interest payments per year: ");

    //choose the number of interest payments
    switch (UserChoice) {
        case 1: 
        printf("12\n"); 
        break;
        case 2: 
        printf("4\n"); 
        break;
        case 3: 
        printf("1\n"); 
        break;
        default: 
        printf("Invalid choice\n");
        return 1;
    }

    switch (UserChoice) {
        case 1: 
        Calculations(12, YearPercent, InvestedSum, TimeForInvestment); 
        break;
        case 2: 
        Calculations(4, YearPercent, InvestedSum, TimeForInvestment); 
        break;
        case 3: 
        Calculations(1, YearPercent, InvestedSum, TimeForInvestment); 
        break;
    }

    return 0;
}
