#include<stdio.h>
#include<cmath>

int main(){
    printf("Уведіть початкову кількість переглядів: ");
    int v0;
    scanf("%d", &v0);

    printf("Уведіть зростання кількості переглядів (у %%): ");
    float p;
    scanf("%f", &p);
    p = p/100;

    printf("Уведіть кількість днів: ");
    int t;
    scanf("%d", &t);

    float part1, part2, result;
    part1 = 1 + p;
    part2 = pow(part1, t);
    result = v0 * part2;

    printf("Зростання: %.2f\n", result);
    printf("Прогноз переглядів через 10 днів: %.0f\n", (int) v0 * pow(part1, 10));
    
    return 0;
}