#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
 
  int sum;
  printf("Введіть початкову суму івестиції:\n");
  scanf_s("%d", &sum);



  float percent;
  printf("Введіть річну процентну ставку увідсотках:\n");
  scanf_s("%f", &percent);


  int number;
  printf("Введіть кількість нарахувань відсотків на рік:\n");
  scanf_s("%d", &number);

  int  years;
  printf("Введіть час , на який гроші інвестуються, в роках:\n");
  scanf_s("%d", &years);

  float result = sum * pow((1 + (percent / 100) / number), number * years);
  printf("Загальна сума через %d років: %.f\n", years, result);


  return 0;
}