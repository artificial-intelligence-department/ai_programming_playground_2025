#include <cstdio>   

int main() {
    char name[50];       
    int hours;           
    double rate;         
    double salary;      

    printf("Enter name, work hours and hourly rate:\n");
    scanf("%s %d %lf", name, &hours, &rate);

    salary = hours * rate;

    printf("The worker %s was paid: %.2lf grn\n", name, salary);

    return 0;
}
