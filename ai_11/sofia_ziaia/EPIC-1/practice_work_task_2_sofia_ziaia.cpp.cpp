#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int v0;
    int t;
    float p;
    float growth;
    float forecast;

    printf("Введіть початкову кількість переглядів: ");
    scanf("%d", &v0);

    printf("Введіть відсоток зростання: ");
    scanf("%f", &p);

    printf("Введіть кількість днів: ");
    scanf("%d", &t);

    growth = v0 * pow(1.0 + p / 100.0, t);
    forecast = roundf(growth);

    printf("Зростання: %.2f\n", growth);
    printf("Прогноз переглядів через %d днів: %.0f\n", t, forecast);

    return 0;
}