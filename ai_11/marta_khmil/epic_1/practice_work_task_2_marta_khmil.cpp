#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string name;
    int hours;
    double rate;
    double salary;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter worked hours and hourly rate: ";
    cin >> hours >> rate;
    salary = hours * rate;
    cout << fixed << setprecision(2);
    cout << "Employee " << name << " earned: " << salary << " UAH" << endl;
    return 0;
}
