#include <cstdio>

int main() {
    char name[50];
    int hours;
    float salary_per_hour;
    scanf("%100s", name);
    scanf("%d", &hours);
    scanf("%f", &salary_per_hour);
    float salary = hours * salary_per_hour;
    printf("Працівник %s отримав зарплату: %.2f грн \n", name, salary);
    return 0;
}