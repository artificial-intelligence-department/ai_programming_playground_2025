#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;
int main() {
    
    int sum;
    printf("Enter the initial investment amount:\n");
    scanf("%d", &sum);

    float percent;
    printf("Enter the annual interest rate (in percent):\n");
    scanf("%f", &percent);

    int number;
    printf("Enter the number of compounding periods per year:\n");
    scanf("%d", &number);

    int years;
    printf("Enter the investment period (in years):\n");
    scanf("%d", &years);

    float finalsum = sum * pow((1 + ((percent / 100) / number)), number * years);
    printf("The total investment after %d years is: %f\n", years, finalsum);

    return 0;
}