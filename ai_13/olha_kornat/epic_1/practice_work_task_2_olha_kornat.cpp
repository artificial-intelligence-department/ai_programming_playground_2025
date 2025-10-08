#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {

    char name[50];
    int hours;
    double a;

    printf ("Entre your name: ");
    scanf ("%s", &name);

    printf ("Enter the number of hours worked: ");
    scanf ("%d", &hours);

    printf ("Enter your hourly rate: ");
    scanf ("%lf", &a);

    printf ("Employee: %s\n", name);
    printf ("Hours worked: %d\n", hours);
    printf ("Total salary: %.2lf\n", hours * a);

    return 0;
}