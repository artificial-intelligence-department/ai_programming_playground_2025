#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cmath>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
SetConsoleCP(65001);
double views=0;
double num_time=0;
double days=0;
double total=0;
printf("Введіть початкову кількість переглядів: ");
scanf("%lf", &views);
printf("Введіть відсоток зростання переглядів: ");
scanf("%lf", &num_time);
printf("Введіть кількість днів: ");
scanf("%lf", &days);
total=views*pow((1+((double)num_time/100.00)),days);

 printf("Зростання(float):%.2f\n",total);
 total=round(total);
 printf("Прогноз переглядів через %.0f днів:%.0f",days,total);
 return 0;






}