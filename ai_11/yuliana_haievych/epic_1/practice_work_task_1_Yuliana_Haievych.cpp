#include <stdio.h>
#include <cmath>

int main() {
    double P, r, A , t ;
int s;
printf("Введіть початкову суму депозиту (P): ");
scanf("%lf", &P);
printf("Введіть річну процентову ставку (r): ");
scanf("%lf", &r);
printf("Введіть  час (t): ");
scanf("%lf", &t);
 printf(" Варіанти виплати відсотків : 1 Кожного місяця ; 2 Кожного кварталу; 3 Раз у рік : ");
scanf("%d", &s);
 switch (s)
{
case 1 :
   
A= P*pow(1+r/12,12*t);
    break;
case 2:
   
A= P*pow(1+r/4,4*t);
    break;
case 3 :
A= P*pow(1+r/1,t);
    break;
    break;
}

printf( "Вкладені кошти: %.2lf\n", P );
printf( "Загальна сума інвестицій  %.2lf\n",A);
printf( "Заробіток %.2lf\n" ,  A-P);


return 0;


}