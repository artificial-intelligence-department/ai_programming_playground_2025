#include <cstdio>
#include <cmath>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
int n, t, cho;
float P, r;
printf("Основна сума інвестиції: ");
scanf("%f", &P);

printf("Річна відсоткова ставка(%): ");
scanf("%f", &r);

printf("Час, на який гроші інвестуються(у роках): ");
scanf("%d", &t);

printf("Виберіть варіанти виплат:\n");
printf("1 - кожного місяця\n");
printf("2 - кожного кварталу\n");
printf("3 - кожного року\n");

printf("Ваш вибір: ");
scanf("%d", &cho);

if(cho == 1)
n = 12;
else if(cho == 2)
n = 4;
else
n = 1;
float interest = r/100;
float A = P * pow(1 + interest/n, n * t);
float income = A - P;
printf("Основна сума інвестиції: %.2f\n", P);
printf("Річна відсоткова ставка(%): %.2f\n", r);
printf("Час, на який гроші інвестуються(у роках): %d\n", t);
printf("Майбутня загальна сума інвестиції: %.2f\n", A);
printf("Сума заробітку: %.2f\n", income);
    return 0;
}