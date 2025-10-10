#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    double P, r, A;
    int periodOption, n;
    double t;

    printf("Enter the initial investment amount (P): ");// Ввід початкової суми
    scanf("%lf", &P);

    printf("Enter the annual interest rate (in %): ");// Ввід річної процентної ставки
    scanf("%lf", &r);
    r /= 100;  // Переводимо у десяткову форму

    printf("Enter the term of the deposit (in years): ");// Ввід терміну
    scanf("%lf", &t);

    // Вибір періоду нарахування відсотків
    printf("Select the interest accrual period:\n");
    printf("1 - Monthly\n2 - Quarterly\n3 - Annually\n");
    printf("Your choise: ");
    scanf("%d", &periodOption);

    switch (periodOption) {
        case 1:
            n = 12;
            break;
        case 2:
            n = 4;
            break;
        case 3:
            n = 1;
            break;
        default:
            printf("Incorrect period selection.\n");
            return 1;
    }

    // Обчислення майбутньої суми за формулою
    A = P * pow((1 + r / n), n * t);

    // Виведення результатів
    printf("initial investment amount (P): %.2lf uah\n", P);
    printf("annual interest rate: %.2lf%%\n", r * 100);
    printf("period of investment: %.1lf years\n", t);
    printf("interest accrual: %d times per year\n", n);
    printf("overall amount (A): %.2lf uah\n", A);
    printf("amount of earnings: %.2lf uah\n", A - P);

    return 0;
}