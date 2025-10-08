#include <cstdio>  

int main() {
    char name[100];
    int hours;           
    double rate;         

    printf("Enter name, work hours and hourly rate:\n");
    scanf("%s %d %lf", name, &hours, &rate);

    printf("The worker %s was paid: %.2lf grn\n", name, hours * rate);

    return 0;
}