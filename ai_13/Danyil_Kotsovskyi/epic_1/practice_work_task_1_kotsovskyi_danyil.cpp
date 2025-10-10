#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int start,count,years,percentage;
    printf("Введіть початкову суму інвестиції: ");
    scanf("%d" , &start);
    printf("Введіть кількість нарахувань відсотків в рік [4 / 12 / 365]: ");
    scanf("%d" , &count);
    printf("Введіть річну ставку у відсотках: ");
    scanf("%d" , &percentage);
    printf("Введіть кількість років: ");
    scanf("%d" , &years);
    double result = start*pow(1+(double)percentage/100/count,years*count);
    printf("Інвестиція: %d\n",start);
    printf("Майбутня сума інвеcтицій: %.2lf\n",result);
    printf("Заробіток: %.2lf\n",result-start);
    return 0;
}