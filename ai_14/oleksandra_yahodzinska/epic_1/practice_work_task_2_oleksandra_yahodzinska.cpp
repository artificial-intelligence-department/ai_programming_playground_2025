#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

    string name;
    int hours;
    float hourly_rate;

    cin >> name >> hours >> hourly_rate;

    float salary = hours * hourly_rate;

    cout << "Працівник " << name << " отримав зарплату: " << fixed << setprecision(2) << salary << " грн" << endl;

    return 0;
}