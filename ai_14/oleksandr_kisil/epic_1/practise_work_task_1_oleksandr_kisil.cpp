#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double P, r, t, A;
    int n, choice;
    string accrual;

    printf("Enter deposit: ");
    scanf("%lf", &P);

    printf("Enter annual rate (%%): ");
    scanf("%lf", &r);

    printf("Enter term (years): ");
    scanf("%lf", &t);

    printf("Choose accrual type:\n1 - Monthly\n2 - Quarterly\n3 - Annually\n");
    scanf("%d", &choice);

    if (choice == 1) {
        n = 12;
        accrual = "monthly";
    } else if (choice == 2) {
        n = 4;
        accrual = "quarterly";
    } else if (choice == 3) {
        n = 1;
        accrual = "annually";
    } else {
        printf("Invalid Choice\n");
        return 1;
    }

    r = r / 100.0;
    A = P * pow(1 + r / n, n * t);
    double income = A - P;

    printf("Your deposit amount: %.2lf\n", P);
    printf("Annual rate: %.2lf%%\n", r * 100);
    printf("Term: %.0lf years\n", t);
    printf("Accrual: %s\n", accrual.c_str());
    printf("Final amount: %.2lf\n", A);
    printf("Income: %.2lf\n", income);

    return 0;
}