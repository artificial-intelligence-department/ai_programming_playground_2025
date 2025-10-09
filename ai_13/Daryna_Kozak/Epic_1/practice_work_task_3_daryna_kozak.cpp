#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  
  int sum;
  printf("Enter the initial investment amount:\n");
  scanf_s("%d", &sum);



  float percent;
  printf("Enter the annual interest rate in percent:\n");
  scanf_s("%f", &percent);


  int number;
  printf("Enter the number of times interest is compounded per year:\n");
  scanf_s("%d", &number);

  int  years;
  printf("Enter the time in years for which the money is invested:\n");
  scanf_s("%d", &years);

  float result = sum * pow((1 + (percent / 100) / number), number * years);
  printf("Total amount after %d years: %.f\n", years, result);


  return 0;
}
