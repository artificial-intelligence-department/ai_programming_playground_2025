#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    float hours;
    float hours_rate;
    float salary;

    cout << "Name: ";
    cin >> name;

    cout << "Number of hours worked: ";
    cin >> hours;

    cout << "Hours rate: ";
    cin >> hours_rate;

    salary = hours * hours_rate;

    cout << "Employee " << name << " gets " << fixed << setprecision(2) << salary << endl;
}