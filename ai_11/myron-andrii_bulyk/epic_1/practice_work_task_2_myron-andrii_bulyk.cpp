#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
    string name;
    int hours;
    double rate;
	cout <<  "Enter the employee's name, number of hours worked, and hourly rate.: ";
    cin >> name >> hours >> rate;


    double salary = hours * rate;

    cout << "Employee " << name << " received salary: ";
    cout << fixed << setprecision(2) << salary << " UAH:" << endl;

    return 0;
}