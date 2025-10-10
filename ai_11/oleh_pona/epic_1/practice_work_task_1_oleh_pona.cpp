#include <cstdio>
#include <cmath>

float calculate(float base, float annual_rate, int num_of_periods,int time) {
    return base*pow((1+annual_rate/num_of_periods), num_of_periods*time);
}

int main() {
    double base;
    double annual_rate;
    int num_of_periods;
    int choice;
    int time;

    printf("Enter base sum (P): ");
    scanf("%lf", &base);

    printf("Enter annual interest rate in percentage (e.g., 5 for 5%%): ");
    scanf("%lf", &annual_rate);
    printf("Enter investment duration in years (t): ");
    scanf("%d", &time);

    printf("\nSelect interest capitalization frequency:\n");
    printf("1. Monthly\n");
    printf("2. Quarterly\n");
    printf("3. Annually\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    annual_rate = annual_rate / 100.0; 
    switch (choice) {
        case 1:
            num_of_periods = 12;
            break;
        case 2:
            num_of_periods = 4;
            break;
        case 3:
            num_of_periods = 1;
            break;
        default:
            printf("Invalid choice. The program will be terminated.\n");
            return 1; // Return error
    }

    double result = calculate(base, annual_rate, num_of_periods, time);

    printf("Initial investment:%.2lf \n", base);
    printf("Final amount:%.2lf \n", result);
    printf("Interest earned:%.2lf \n", result - base);

    return 0;
}