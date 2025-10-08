#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int hours;
    double rate;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter number of worked hours: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> rate;

    double salary = hours * rate;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Employee " << name << " earned: " << salary << " UAH" << endl;

    return 0;
}