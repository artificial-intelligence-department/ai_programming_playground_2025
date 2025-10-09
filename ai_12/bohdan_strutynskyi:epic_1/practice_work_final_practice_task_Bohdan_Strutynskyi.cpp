#include <stdio.h>
#include <math.h>

int main() {
    int capital, narahyvannya, years;
    long double stavka, income, total;

    printf("Введіть початкову суму інвестицій, процентну ставку, кількість нарахувань на рік, час інвестиції: ");
    scanf("%d %Lf %d %d", &capital, &stavka, &narahyvannya, &years);

    total = capital * pow(1 + stavka / narahyvannya, narahyvannya * years);
    income = total - capital;

    printf("Вкладені кошти: %d\n", capital);
    printf("Загальна сума інвестицій: %.2Lf\n", total);
    printf("Заробіток: %.2Lf\n", income);

    return 0;
}
