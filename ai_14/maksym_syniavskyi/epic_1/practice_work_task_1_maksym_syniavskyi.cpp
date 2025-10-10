#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int hours;
    double rate;

    cin >> name >> hours >> rate;

    double salary = hours * rate;

    cout << fixed << setprecision(2);
    cout << "Працівник " << name << " отримав зарплату: " << salary << " грн" << endl;

    return 0;
}