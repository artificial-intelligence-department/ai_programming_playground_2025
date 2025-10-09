#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    double P,r,n,t;
    printf("Введіть основну суму інвестиції: ");
    scanf("%lf", &P);
    printf("Введіть річну процентну ставку: ");
    scanf("%lf", &r);
    printf("Введіть спосіб нарахувань відсотків за рік (12 - нарах. кожного місяця, 4 - за квартал, 1 - за рік): ");
    scanf("%lf", &n);
    printf("Введіть час на який інвестуються гроші (в роках): ");
    scanf("%lf", &t);
    printf("Вкладені кошти: ");
    printf("%.2lf\n", P);
    printf("Загальна сума інвестиції : ");
    printf("%.2lf\n", P*pow((1+r/n),n*t));
    printf("Сума заробітку : ");
    printf("%.2lf\n", P*pow((1+r/n),n*t)-P);
  
  return 0;
}