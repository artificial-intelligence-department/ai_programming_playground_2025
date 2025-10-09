#include <iostream>
using namespace std;
#include <cmath>
int main() {
   int Vo ,t  ;
 float V ;
 double p;
printf("Введіть початкову кількість переглядів (Vo): ");
scanf("%d", &Vo);
printf("Введіть процент зростання відео (p): ");
scanf("%lf", &p);
printf("Введіть кількіст днів ( t): ");
scanf("%d", &t);
   V = Vo * pow(1+(p/100),t);

printf("Зростання %lf\n", V);
printf("Прогноз переглядів через %lf\n", round(V));







    return 0;
}