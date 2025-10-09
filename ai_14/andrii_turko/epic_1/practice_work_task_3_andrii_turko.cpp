#include <math.h>
#include <stdio.h>

int main() {
    double initial_views, procent;
    int days;
    scanf("%lf %lf %d", &initial_views, &procent, &days);

    double total_views = initial_views * pow(1 + procent / 100, days);

    printf("Зростання (float): %.2lf\n", total_views);
    printf("Прогноз переглядів через %d днів: %.0lf\n", days, total_views);

    return 0;
}