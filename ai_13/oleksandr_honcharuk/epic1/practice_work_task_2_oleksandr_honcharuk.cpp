#include <stdio.h>
#include <math.h>

int main() {
    float res, v, p, t;

    printf("enter initial views, views per day(percents), time: ");
    scanf("%f %f %f", &v, &p, &t); 
    res = v * pow((1 + p / 100), t);

    printf("Result: %.2f\n", res); 

    return 0;
}