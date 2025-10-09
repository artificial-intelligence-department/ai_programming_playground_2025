#include <stdio.h>
#include <math.h>

int main() {
    int v0;
    double p;
    int t;
    double перегляди;

    printf("Введіть початкову кількість переглядів: ");
    scanf("%d", &v0);

    printf("Введіть щоденний відсоток зростання: ");
    scanf("%lf", &p);

    printf("Введіть кількість днів для прогнозу: ");
    scanf("%d", &t);

    перегляди = v0 * pow(1.0 + p / 100.0, t);

    printf("Зростання (float): %.2f\n", перегляди);
    printf("Прогноз переглядів через %d днів: %.0f\n", t, перегляди);

    return 0;
}