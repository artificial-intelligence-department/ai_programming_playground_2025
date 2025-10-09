#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double p;      // освнона сума
    double r;      // процентна ставка
    int t;         // триваліть
    int n;         // кількість нарахувань за рік
    double a;      // сума з урахуванням нарахованих відсотків
    double profit; // заробіток а-р
    char choice;

    printf("Select the number of interest payments per year (month = 'm', quarter = 'q', year = 'y'): ");
    scanf(" %c", &choice);
    switch (choice)
    {
    case 'm':
        n = 12;
        break;
    case 'q':
        n = 4;
        break;
    case 'y':
        n = 1;
        break;
    default:
        printf("Wrong choice");
        return 1;
    }

    printf("Amount of money invested: ");
    scanf("%lf", &p);

    printf("Interest rate: ");
    scanf("%lf", &r);
    r /= 100;

    printf("Deposit duration: ");
    scanf("%d", &t);

    a = p * pow(1 + (r / n), n * t);

    profit = a - p;

    printf("Invested money: %.2lf \n", p);
    printf("Itotal investment amount: %.2lf \n", a);
    printf("the amount of profit: %.2lf \n", profit);
}