#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cmath>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
SetConsoleCP(65001);
double sum=0;
double num_time=0;
double num=0;
double total=0;
double time=0;
printf("Введіть основну суму інвестиції: ");
scanf("%lf", &sum);
printf("Введіть річну процентну ставку (у десятковій формі, тобто 5% = 0,05): ");
scanf("%lf", &num_time);
printf("Введіть кількість нарахувань відсотків на рік(1-якщо кожного року, 4-якщо кожного кварталу, 12-якщо кожного місяця): ");
scanf("%lf", &num);
printf("Введіть час, на який гроші інвестуються, у роках: ");
scanf("%lf", &time);
total=sum*pow((1+(num_time/num)),num*time);

 printf("Вкладені кошти:%.2f\n",sum);
 
 printf("Загальна сума інвестиції:%.2f\n",total);
 printf("Сума заробітку:%.2f",total-sum);
 return 0;






}