// Practice work task 1 - Oleksandr Kovtun
// #include <stdio.h>
int main() {
char name[50];
int hours;
float rate, salary; 

    printf("Name employee's name: ");
    scanf("%s", name);
    printf("Enter the number of hours worker: ");
    scanf("%d", &hours);
    printf("Enter the hourly rate: ");
    scanf("%f", &rate);

    salary = hours * rate;

    printf("Employee %s received a salary: %.2f UAH\n", name, salary);

}
