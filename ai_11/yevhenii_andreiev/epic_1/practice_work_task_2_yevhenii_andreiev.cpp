#include <stdio.h>
#include <math.h>

int main() {
    int views, days;
    double growth_p;
    
    // Замість float потрібно всюди використовувати double для кращої точності.
    // При розрахунках з float на прикладі "10000 5 10" зростання відрізняється від правильної відповіді на 0.01, тому double є тут корисним.

    printf("Enter the number of video views, the percentage of video view growth, and the number of days you want to get a forecast for separated by a space: ");
    scanf("%d %lf %d", &views, &growth_p, &days);

    double forecast = views * pow(1 + growth_p / 100, days);

    printf("Growth: %.2lf\n", forecast);
    printf("View forecast in %d days: %d", days, (int) (forecast + 0.5)); // Додавши до десяткового дробу 0.5 і відкинувши дробову частину перетворенням у int, можна округлити число.
}