#include <stdio.h>
#include <math.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);
    int choice;
    float r, n, t, a, p1;
    printf("Виберіть частоту нарахування відсотків:\n");
    printf("1 - Раз на рік\n");
    printf("2 - Раз на 3 місяці\n");
    printf("3 - Раз на місяць\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    if (choice == 1) {
        n = 1;
    } else if (choice == 2) {
        n = 4;
    } else if (choice == 3) {
        n = 12;
    } else {
        printf("Невірний вибір!\n");
        return 1;
    }

    printf("\nВведи річну ставку (%%): ");
    scanf("%f", &r);

    printf("Введи кількість років: ");
    scanf("%f", &t);

    printf("Введи суму під відсотки: ");
    scanf("%f", &p1);

    a = p1 * pow(1 + r / (100 * n), n * t);

    printf("\nКінцева сума: %.2f\n", a);
    printf("Заробіток: %.2f\n", a - p1);

    return 0;
}