﻿#include <stdio.h>
#include <cmath>

int main() {
    double p, t, r;
    int n, choice;

    printf("Enter your deposit: ");
    scanf_s("%lf", &p);

    printf("Enter annual interest rate (%%): ");
    scanf_s("%lf", &r);
    r = r / 100;

    printf("Enter time (in years): ");
    scanf_s("%lf", &t);

    printf("Choose type of payments:\n");
    printf("1 - yearly\n");
    printf("2 - monthly\n");
    printf("3 - quartal\n");
    printf("Your choice: ");
    scanf_s("%d", &choice);


    if (choice == 1) {
        n = 1;
    }
    else if (choice == 2) {
        n = 12;
    }
    else if (choice == 3) {
        n = 4;
    }
    else {
        printf("Invalid choice. try again\n");
        return 0;
    }

    double a = p * pow((1 + r / n), n * t);
    double interest = a - p;

    printf("Initial deposit: $%.2lf\n", p);
    printf("Annual interest rate: %.2lf%%\n", r * 100);
    printf("Time period: %.1lf years\n", t);

    const char* payment_type;
    if (choice == 1) payment_type = "Yearly";
    else if (choice == 2) payment_type = "Monthly";
    else payment_type = "Quartal";
    printf("Payment type: %s\n", payment_type);
    printf("Final amount: $%.2lf\n", a);
    printf("Interest earned: $%.2lf\n", interest);


    return 0;
}