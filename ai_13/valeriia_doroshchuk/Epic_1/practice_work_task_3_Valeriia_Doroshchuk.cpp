#include <iostream>
#include <cmath>
using namespace std;
int main(){

float aver, views, procents; 
int days;
printf( "Specify the number of views: " );
scanf("%f", &views);
printf("Percentage growth: ");
scanf("%f", &procents);
printf("Number of days: ");
scanf("%d", &days);

aver = views * pow(1 + procents/100, days);

printf("\nGrowth: %.2f:\n", aver);
printf("Expected number of views in %d days: %d\n", days, (int)round(aver));

    return 0;
}