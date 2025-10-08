#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    printf("Ввід: ");
    int t, n;
    double r, p;
    scanf("%lf %lf %d %d", &p, &r, &n, &t);
    ;
    double A = p * pow((1 + r / n), (n * t));

    printf("Основна сума інвестиції: %.2lf\n", p);
    printf("Річна процентна ставка: %.2lf\n", r);
    printf("К-сть нарахувань відсотків на рік: %d\n", n);
    printf("Час, на який гроші інвестуються, у роках: %d\n", t);
    printf("Майбутня загальна сума інвестиції, включаючи відсотки: %.2f\n", A);
    printf("Сума заробітку: %.2f\n", A - p);
    return 0;
}