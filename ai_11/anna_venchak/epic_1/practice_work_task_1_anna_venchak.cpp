#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int n, t;
    double a, p, r, profit;
    printf("Введіть основну суму інвестиції: ");
    scanf("%lf", &p);
    printf("Введіть значення річної процентної ставки (у десятковій формі): ");
    scanf("%lf", &r);
    printf("Введіть кількість нарахувань відсотків на рік: ");
    scanf("%d", &n);
    printf("Введіть кількість часу, на яку гроші інвестуються (у роках): ");
    scanf("%d", &t);
    if (n <= 0 || t <= 0 || p <= 0 || r <= 0)
    {
        printf("Помилка: це значення не може дорівнювати 0\n");
        return 0;
    }
    a = p * pow(1 + r / n, n * t);
    profit = a - p;
    printf("Початкова сума інвестиції: %.2f\n", p);
    printf("Загальна сума інвестиції: %.2f\n", a);
    printf("Сума заробітку : %.2f\n", profit);
    return 0;
}