#include <iostream>
using namespace std;

int main() {
    string name;
    int hours;
    float rate, salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter number of hours worked: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> rate;

    salary = hours * rate;

    cout << "Employee " << name << " earned a salary of: " << salary;

    return 0;
}
