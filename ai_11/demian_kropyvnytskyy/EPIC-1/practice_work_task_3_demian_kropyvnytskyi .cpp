#include <stdio.h>
#include <cmath>
int main(){
    printf("Напишіть поточні перегляди відео: ");
    int current_views;
    scanf("%d", &current_views);
    
    printf("введіть ріст переглядів у відсотках: ");
    float growth_rate;
    scanf("%f", &growth_rate);
    growth_rate=growth_rate/100;
    printf("вкажіть кількість днів: ");
   int days;
    scanf("%d", &days);
    int final_views = current_views * pow((1 + growth_rate / 100), days);
    printf("Прогнозовані перегляди через %d днів: %d\n", days, final_views);
    return 0;
}