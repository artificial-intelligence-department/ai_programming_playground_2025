#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int P, n, t, A;
    double r=0.05;
    printf("Введіть початкову суму, кількість нарахувань за рік і роки:\n");
    scanf("%d%d%d", &P, &n, &t);
    A = P * pow(1 + r/n, n*t);
    printf("Вкладені кошти %d\n", P);
    printf("Загальна сума %d\n", (int)round(A));
    printf("Сума заробітку %d\n", (int)round(A - P));

    return 0;
}