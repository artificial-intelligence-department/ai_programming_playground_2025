#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int time;
    double hourly_pay;
    cin >> name;
    cin >> time >> hourly_pay;
    long double pay = time*hourly_pay;
    cout << "Employee " << name << " has been paid " << pay << endl;
    return 0;
}