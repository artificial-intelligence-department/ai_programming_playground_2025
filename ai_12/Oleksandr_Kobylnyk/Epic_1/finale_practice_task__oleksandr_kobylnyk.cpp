#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float P, r, n, t;

    printf("Input the start sum of investment: ");
    scanf("%f", &P);
    
    printf("Input the annual interest rate: ");
    scanf("%f", &r);

    printf("Input the number of times that interest is compounded per year: ");
    scanf("%f", &n);

    printf("Input the number of years the money is invested for: ");
    scanf("%f", &t);

    double A = P * pow((1 + r / n), n * t);

    float profit = A - P;
    
    float amount_in_month = P * pow((1 + r / n), n * 1/12);
    float profit_in_month = amount_in_month - P;

    float amount_in_quarter = P * pow((1 + r / n), n * 1/4);
    float profit_in_quarter = amount_in_quarter - P;    

    float amount_in_year = P * pow((1 + r / n), n);
    float profit_in_year = amount_in_year - P;

    printf("You invested %.2f ", P);

    printf("under the annual interest rate of %.2f ", r);
    printf("for %.2f years\n", t);
    printf("with the interest compounded %.2f times per year.\n", n);
    printf("And you earned: %.2f in the end\n", profit);
    
    printf("In month your amount is: %.2f\n", amount_in_month);
    printf("In month you earn: %.2f\n", profit_in_month);
    
    printf("In quarter your amount is: %.2f\n", amount_in_quarter);
    printf("In quarter you earn: %.2f\n", profit_in_quarter);

    printf("In year your amount is: %.2f\n", amount_in_year);
    printf("In year you earn: %.2f\n", profit_in_year);

    printf("The final amount after investment: %.2lf\n", A);
    return 0;
    
}