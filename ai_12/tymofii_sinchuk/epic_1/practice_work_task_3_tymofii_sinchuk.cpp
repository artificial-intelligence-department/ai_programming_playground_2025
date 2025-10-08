#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A,P,t,n,r;

    printf("Введіть основну сумму інвестицій: \n");
    scanf("%lf",&P);
    printf("Введіть річну проценту ставку: \n");
    scanf("%lf",&r);
    printf("Введіть кількість нарахуваннь відсотків на рік: \n");
    scanf("%lf",&n);
    printf("Введіть час на який гроші інвестуються (у роках): \n");
    scanf("%lf",&t);
    
    A = P*pow((1+r/n),n*t);

    printf("Вкладені гроші: %lf \n Загальна сума інвестицій: %lf \n Сумма самого заробітку: %lf \n",P,A,(A-P));
    return 0;
}