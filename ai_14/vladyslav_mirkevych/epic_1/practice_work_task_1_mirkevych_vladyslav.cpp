#include <stdio.h>
#include <math.h>

int main() {
    int n, t, choice;
    double P, r, A;

    printf("Введіть початковий вклад, n, r, t та choice: ");
    scanf("%lf %d %lf %d %d", &P, &n, &r, &t, &choice);

    switch (choice) {
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
            printf("Невірний вибір\n");
            return 1;
    }

    A = P * pow(1 + r / (double)n, n * t);

    printf("Початковий вклад - %.2lf\n", P);
    printf("Сума заробітку - %.2lf\n", A - P);
    printf("Загальна сума інвестиції - %.2lf\n", A);

    return 0;
}
