#include <stdio.h>
#include <iostream>
#include <cmath>

int main() {

    int Views;
    int time;
    float percent;

    scanf("%i %i %f", &Views, &time, &percent);

    float I = Views * pow((1 + percent/100), time); 

    printf("Зростання: %.2f \n", I);
    printf("Прогнозована кількість переглядів через %i днів: %i", time, (int)round(I));




    return 0;
}