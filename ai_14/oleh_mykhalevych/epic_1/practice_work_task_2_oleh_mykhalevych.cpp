#include <cstdio>

int main() {
    char name[50];   
    int hours;       
    float rate, salary;

    printf("Enter worker's name, hours worked, and hourly rate:\n");
    scanf("%s %d %f", name, &hours, &rate);

    salary = hours * rate;

    printf("Worker %s earned a salary of %.2f UAH\n", name, salary);

    return 0;
}
