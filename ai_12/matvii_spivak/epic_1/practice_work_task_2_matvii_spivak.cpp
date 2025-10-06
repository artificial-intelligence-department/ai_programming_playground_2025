#include <stdio.h>

int main() {
    char name[256];
    int hours;
    float rate;

    if (scanf("%255s %d %f", name, &hours, &rate) != 3) {
        printf("Помилка: неправильний ввід\n");
        return 1;
    }

    if (hours < 0 || rate < 0) {
        printf("Помилка: значення повинні бути додатніми\n");
        return 1;
    }

    float salary = hours * rate;
    printf("Працівник %s отримав зарплату: %.2f грн\n", name, salary);

    return 0;
}