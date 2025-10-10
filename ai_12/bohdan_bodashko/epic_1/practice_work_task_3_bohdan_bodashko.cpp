#include<math.h>
#include<stdio.h>

int main(){
    using namespace std;

    float p, r, a;
    int n, t;

    printf("Уведіть суму інвестицій: ");
    scanf("%f", &p);

    printf("Уведіть річну процентну ставку (у %%): ");
    scanf("%f", &r);
    r = r/100;

    printf("Уведіть кількість нарахувань відсотків на рік: ");
    scanf("%d", &n);

    printf("Уведіть час на який інвестуються гроші (у роках): ");
    scanf("%d", &t);

    float part1, part2, part3, part4;
    part1 = r/n;
    part2 = n * t;
    part3 = 1 + part1;
    part4 = pow(part3, part2);
    a = p * part4;
    printf("Вкладені кошти: %.2f \n", p);
    printf("Загальна сума інвестицій: %.2f \n", a);
    printf("Сума заробітку: %.2f \n", a - p);
    return 0;
}
