#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    char name[100];
    int hours;
    float rate, salary;
    printf("Enter employee name: ");
    scanf(" %[^\n]", name);
    printf("Enter number of hours worked: ");
    scanf("%d", &hours);
    printf("Enter hourly rate: ");
    scanf("%f", &rate);
    salary = hours * rate;
    printf("Employee %s earned a salary of: %.2f\n", name, salary);
    return 0;
}
