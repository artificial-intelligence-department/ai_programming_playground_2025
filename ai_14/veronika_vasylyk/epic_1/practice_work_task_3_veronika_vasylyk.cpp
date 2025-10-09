#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int P, n, t;
    double r=0.05, A;
    printf("Введіть початкову суму\n");
    scanf("%d", &P);
    printf("Введіть термін вкладу (в роках)\n");
    scanf("%d", &t);
    printf("Виберіть варіант нарахування відсотків\n");
    printf("1 Кожного місяця:\n");
    printf("2 Кожного кварталу:\n");
    printf("3 Кожного року:\n");
    printf("Ваш вибір: ");
    scanf("%d", &n);
    if (n == 1) {
    n = 12;
    } else if (n == 2) {
    n = 4;
    } else if (n == 3) {
    n = 1;
    } else {
        printf("Невірний вибір!\n");
        return 1;
    }
    A = P * pow(1 + r/n, n*t);
    printf("Вкладені кошти %d\n", P);
    printf("Загальна сума %d\n", (int)round(A));
    printf("Сума заробітку %d\n", (int)round(A - P));

    return 0;
}