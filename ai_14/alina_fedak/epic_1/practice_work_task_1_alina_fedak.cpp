#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int hours;
    double stavka;

    cin >> name >> hours >> stavka;

    double salary = hours * stavka;

    cout << fixed << setprecision(2);
    cout << "Employee " << name << " earned a salary of: " << salary << " hryvnias." << endl;

    return 0;
}