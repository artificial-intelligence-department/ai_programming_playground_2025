#include <iostream>
int main()
{
   std::string name;
   int hours;
   int stavka;

   std::cout <<"enter name: ";
   std::cin >> name;

   std::cout << "enter works hour: ";
   std::cin >> hours;

   std::cout << "enter your stavka: ";
   std::cin >> stavka;

   double zp = hours * stavka;
   std::cout << "Employer "<< name << " gets payment: "<< zp <<"uan";


   
   
   return 0;
}