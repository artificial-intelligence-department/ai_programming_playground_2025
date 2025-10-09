#include <cstdio>
#include <cmath>
int main() {
    double A, P, r;
    int t, n, choice;
    printf ("enter your deposit: ");
    scanf ("%lf", &P);
    printf ("enter yearly interest(%%): ");
    scanf ("%lf", &r);
    printf ("enter time(years): ");
    scanf ("%d", &t);
    printf ("enter when percents should impose: \n");
    printf ("1 - monthly \n");
    printf ("2 - querterly \n");
    printf ("3 - yearly \n");
    printf ("your choise: \n");
    scanf ("%d", &choice);
    if (choice == 1) {
        n = 12;
    }
    if (choice == 2) {
        n = 4;
    }
    if (choice == 3) {
        n = 1;
    }
    else {
        printf ("incorrect choice");
    }
    r = r / 100;
    A = P * pow(1 + r / n, n * t);
    printf ("final result: %.3f\n", A);
    printf ("deposit %.3f\n", P);
    printf ("imposed percents: %.3f\n", A - P);
    return 0;
}