#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string name;
    int time;
    double payment_per_hour, payment;
    cin >> name >> time >> payment_per_hour;
    payment = time * payment_per_hour;
    cout << "Працівник " << name << " отримав зарплату " << fixed << setprecision(2) << payment << " гривень ";
}