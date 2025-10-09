#include <iostream>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char name[50];
    printf("Введіть ім'я: ");
    scanf("%49s", name);

    int hours;
    printf("Введіть кількість годин: ");
    scanf("%d", &hours);

    float rate;
    printf("Введіть погодинну ставку: ");
    scanf("%f", &rate);

    float pay = hours * rate;
    printf("Працівник %s отримав зарплату:  %.2f\n", name, pay);

    return 0;
}