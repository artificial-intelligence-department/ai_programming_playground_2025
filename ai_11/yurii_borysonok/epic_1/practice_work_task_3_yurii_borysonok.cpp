#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");

    int start_view, time;
    float end_view, rate;
    printf("Введіть початкову кількість переглядів: ");
    scanf("%d", &start_view);
    printf("Введіть щоденний відсоток збільшення переглядів: ");
    scanf("%f", &rate);
    printf("Введіть кількість днів: ");
    scanf("%d", &time);
    end_view = start_view*pow(1+rate/100, time);
    printf("Зростання %.2f\n", end_view-start_view );
    printf("Прогноз переглядів через %d днів: %.0f", time, end_view);

    return 0;
}