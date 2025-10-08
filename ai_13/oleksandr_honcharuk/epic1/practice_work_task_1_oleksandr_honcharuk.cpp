#include <stdio.h>
#include <math.h>

int main() {
    float h, s, salary;
    char name[50];

    printf("Enter name, hours worked, and hourly rate:");
    scanf("%s %f %f", name, &h, &s);

    salary = h * s;
    printf("Employee: %s\nSalary: %.2f\n", name, salary);

    return 0;
}