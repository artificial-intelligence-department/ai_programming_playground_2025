#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int time;
    double money;

    cout << "Enter the employee's name: ";
    cin >> name;
    cout << "Enter number of working hours: ";
    cin >> time;
    cout << "Enter hourly rate: ";
    cin >> money;
    cout << endl;

    double salary = time * money;
    cout << "Employee " << name << " received a salary of " << salary << " hryvnias" << endl;

    return 0;
}