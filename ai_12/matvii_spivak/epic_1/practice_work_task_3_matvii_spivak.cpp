#include <stdio.h>
#include <math.h>

int main() {
    int V0, t;
    float p;

    if (scanf("%d %f %d", &V0, &p, &t) != 3) {
        printf("Помилка: неправильний ввід\n");
        return 1;
    }

    if (V0 < 0 || t < 0 || p < 0) {
        printf("Помилка: значення повинні бути додатніми");
        return 1;
    }

    float V = V0 * pow(1 + p / 100, t);

    printf("\nЗростання: %.2f", V);
    printf("\nПрогноз переглядів через %d днів: %d", t, (int)round(V));

    return 0;
}