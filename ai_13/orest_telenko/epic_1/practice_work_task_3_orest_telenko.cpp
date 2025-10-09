#include <iostream>
#include <cmath>
int main()
{
   int views;
   int days;
   double percent;
   double result;
   std::cin >> views;
   std::cin >> percent;
   std::cin >> days;
   percent = percent / 100 + 1;
   result = (pow(percent, days));
   result = result * views;
   std::cout << round(result) <<'\n';
}