#include <iostream>
#include <cmath>

using namespace std;

 int main(){
    
    cout << "Deposited sum: ";
    int dep=0;
    cin >> dep;
    
    cout << "Interest rate (%): ";
    double rate=0;
    cin >> rate;
    rate=rate/100;

    cout << "Amount of time (years): ";
    int time=0;
    cin >> time;

    if(dep<0 || !(0<=rate<=1) || time<0){
      cout << "Неправильні введені дані" << endl;
      return 1;
    }
    
    double final=dep*pow(1+rate, time);
    cout << "Final sum: " << final << endl;
    cout << "Profit: " << final-dep << endl;

    cout << "Payments:" << endl;
    cout << "Monthly: " << (final-dep)/(time*12) << endl;
    cout << "Quarterly: " << (final-dep)/(time*4) << endl;
    cout << "Yearly: " << (final-dep)/time << endl;
    
    return 0;
 }