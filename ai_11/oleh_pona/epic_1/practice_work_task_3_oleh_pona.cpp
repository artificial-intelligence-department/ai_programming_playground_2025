#include <cstdio>
#include <cmath>

int main() {
    int start_count;
    float percentage;
    int days;

    scanf("%i %f %i", &start_count, &percentage, &days);

    float increase = start_count * pow(1+ (percentage / 100), days);

    printf("Зростання (float): %.2f \n", increase);
    printf("Прогноз переглядів через %i днів: %i \n", days, (int)round(increase));
    return 0;
}