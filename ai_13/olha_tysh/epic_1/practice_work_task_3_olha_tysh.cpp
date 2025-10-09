#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
    setlocale (LC_ALL, "uk_UA");
    int v0,t,p;
     float vt, increase;
    printf("Введіть початкову кількість переглядів:");
    scanf("%d", &v0);

    printf("Введіть на скільки відсотків зростуть перегляди:");
    scanf("%d", &p);

    printf("Введіть кількість днів:");
    scanf("%d", &t);

    vt = v0 * pow((1 + p / 100.0), t);

    printf("Загальне зростання:%.2f\n", vt);

    increase=vt-v0;
printf("Зростання: %.2f\n Прогноз переглядів через %d дн: %.0f", increase, t,vt);
    return 0;
}