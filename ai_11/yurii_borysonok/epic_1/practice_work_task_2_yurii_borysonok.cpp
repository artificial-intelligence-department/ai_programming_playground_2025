#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main() {

    setlocale(LC_ALL, "ukr");
string name;
int hours;
float salary_per_hour, total_salary;
    printf("Введіть ім'я працівника: ");
    cin >> name;
    printf("Введіть кількість відпрацьованих годин: ");
    scanf("%d", &hours);
    printf("Введіть оплату за годину: ");
    scanf("%f", &salary_per_hour);
    total_salary = hours * salary_per_hour;
    printf("Працівник: %s отримав зарплату: %.2f", name.c_str(), total_salary);
    return 0;
}
