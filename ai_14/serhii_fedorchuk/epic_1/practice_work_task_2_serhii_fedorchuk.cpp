#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    char name[50];
    int hours;
    float rate, salary;
    printf("Введіть ім’я, кількість годин і ставку:\n");
    scanf(" %49s %d %f", name, &hours, &rate);
    salary = hours * rate;
    printf("\nПрацівник %s отримав зарплату - %.2f грн.\n", name, salary);
    
    return 0;
}