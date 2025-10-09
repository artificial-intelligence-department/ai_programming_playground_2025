#include <cstdio>
#include <cmath>

int main() {
    double P, r, A;
    int t, choice, n;

    // Введення початкових даних
    printf("Enter deposit sum (P): ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (%%): ");
    scanf("%lf", &r);

    printf("Enter the deposit term (years): ");
    scanf("%d", &t);

    printf("Select interest accrual period:\n");
    printf("1 - Monthly\n");
    printf("2 - Quarterly\n");
    printf("3 - Annually\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    // Визначення кількості нарахувань на рік
    if (choice == 1) {
        n = 12; // щомісяця
    } else if (choice == 2) {
        n = 4;  // щокварталу
    } else if (choice == 3) {
        n = 1;  // щороку
    } else {
        printf("Wrong choice!\n");
        return 1;
    }

    // Переведення процентів у десятковий вид
    r = r / 100.0;

    // Формула складних відсотків
    A = P * pow(1 + r / n, n * t);

    double profit = A - P;

    // Виведення результатів
    printf("\n====== RESULT ======\n");
    printf("Initial deposit amount: %.2lf\n", P);
    printf("Annual rate: %.2lf%%\n", r * 100);
    printf("Term: %d years\n", t);

    if (choice == 1) printf("Accrual: monthly\n");
    if (choice == 2) printf("Accrual: quarterly\n");
    if (choice == 3) printf("Accrual: annually\n");

    printf("Total amount on account: %.2lf\n", A);
    printf("Profit received: %.2lf\n", profit);

    return 0;
}
