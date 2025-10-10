#include <stdio.h>
#include <math.h>

int main() {
    int V0, t;
    float p, V;

    printf("Введіть початкову кількість переглядів, %% зростання на день і кількість днів:\n");
    scanf("%d %f %d", &V0, &p, &t);

    V = V0 * pow(1 + p / 100, t);

    printf("Зростання (float): %.2f\n", V);
    printf("Прогноз переглядів через %d днів: %.0f\n", t, V);

    return 0;
}