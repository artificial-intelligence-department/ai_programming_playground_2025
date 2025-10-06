#include <iostream>
#include <cmath>

using namespace std;

 int main(){
    
   int dep=0;
   double rate=0;
   int time=0;

   cout << "Deposited sum: ";
   cin >> dep;
    
   cout << "Interest rate (%): ";
   cin >> rate;
    
   cout << "Amount of time (years): ";
   cin >> time;

   if(dep<0 || !(0<=rate<=100) || time<0){
      cout << "Неправильні введені дані" << endl;
      return 1;
   }

   rate=rate/100;
   double final=dep*pow(1+rate, time);
   cout << "Final sum: " << final << endl;
   cout << "Profit: " << final-dep << endl;

   cout << "Payments:" << endl;
   cout << "Monthly: " << (final-dep)/(time*12) << endl;
   cout << "Quarterly: " << (final-dep)/(time*4) << endl;
   cout << "Yearly: " << (final-dep)/time << endl;
    
   return 0;
 }
