#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
SetConsoleCP(65001);
char name[50];
int num_time;
double money;
double total;
printf("Введіть ім'я працівника: ");
scanf("%49s", name);
printf("Введіть кількість відпрацьованих годин: ");
scanf("%d", &num_time);
printf("Введіть погодинну ставку: ");
scanf("%lf", &money);
total=money*num_time;
 printf("Працівник %s отримав зарплату: %.2f грн\n", name, total);
 return 0;






}