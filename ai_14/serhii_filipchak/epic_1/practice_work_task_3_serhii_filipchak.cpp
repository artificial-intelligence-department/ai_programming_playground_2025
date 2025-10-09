#include <stdio.h>
#include <cmath>

int main() {
    double P, r, t, A;
    int n;

    printf("Введіть основну суму інвестиції: ");
    scanf("%lf", &P);
        while (P <= 0) {
        printf("Помилка! Введіть додатнє число: ");
        scanf("%lf", &P);
    }

    printf("Введіть річну процентну ставку (у %%): ");
    scanf("%lf", &r);
        while (r <= 0) {
        printf("Помилка! Введіть додатнє число: ");
        scanf("%lf", &r);
    }
    r = r / 100.0; 

    printf("Введіть кількість років: ");
    scanf("%lf", &t);
        while (t <= 0) {
        printf("Помилка! Введіть додатнє число: ");
        scanf("%lf", &t);
    }

    printf("Виберіть період нарахування відсотків:\n");
    printf("1 — щомісяця\n2 — щокварталу\n3 — щороку\nВаш вибір: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) n = 12;
    else if (choice == 2) n = 4;
    else n = 1;

    A = P * pow(1 + r / n, n * t);

    double profit = A - P;

    printf("\n--- Результати ---\n");
    printf("Початкова сума: %.2f грн\n", P);
    printf("Кінцева сума: %.2f грн\n", A);
    printf("Заробіток (відсотки): %.2f грн\n", profit);

    return 0;
}
