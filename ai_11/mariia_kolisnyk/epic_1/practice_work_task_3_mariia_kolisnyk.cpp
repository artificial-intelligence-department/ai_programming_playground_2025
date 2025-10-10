#include <iostream>
#include <stdio.h>
#include <cmath>


int main(){
    float v0, p, v;
    scanf("%f", &v0);
    
    scanf("%f", &p);

    int t;
    scanf("%d", &t);

    v = v0 * pow(1 + p/100, t);

    printf("Зростання: %.2f\n", v);
    printf("Прогноз переглядів через %d днів: %.0f", t, v);
}

