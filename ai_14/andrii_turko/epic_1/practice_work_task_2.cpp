#include <stdio.h>

int main() {
    char name[100];
    float worked_hours = 0.0f;
    float hourly_rate = 0.0f;

    scanf("%99s %f %f", name, &worked_hours, &hourly_rate);

    float salary = worked_hours * hourly_rate;

    printf("Працівник %s отримав зарплату: %.2f грн", name, salary);
    return 0;
}
