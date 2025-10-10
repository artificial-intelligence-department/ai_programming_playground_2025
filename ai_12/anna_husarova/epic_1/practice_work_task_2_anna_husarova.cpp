#include <iostream>
#include <cmath>

using namespace std;
int main (){
   
    double V0, p, t;   
    double V;          
    int roundedV;

   printf("Введіть початкову кількість переглядів: ");
    scanf("%lf", &V0);

    printf("Введіть щоденне зростання у %%: ");
    scanf("%lf", &p);

    printf("Введіть кількість днів: ");
    scanf("%lf", &t);


    V = V0 * pow(1 + p / 100.0, t);
    roundedV = (int)round(V);


    printf("Зростання (float): %.2lf\n", V);
    printf("Прогноз переглядів через %.0lf днів: %d\n", t,roundedV);

    return 0;
}


