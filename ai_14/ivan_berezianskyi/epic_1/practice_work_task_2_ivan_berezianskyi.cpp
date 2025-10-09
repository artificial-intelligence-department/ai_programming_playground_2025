#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    int hours;
    float money_per_hour;
    float salary;

    cout << "Enter name, hours, money_per_hour: ";

    cin >> name >> hours >> money_per_hour;

    salary = hours * money_per_hour;

    cout << "Worker " << name << " got salary: " << fixed << setprecision(2) << salary << endl;

    return 0;
}
