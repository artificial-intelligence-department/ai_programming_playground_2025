#include <iostream>
#include <stdio.h> 
#include <iomanip> 
using namespace std;

int main () {
    string name;
    int hours;
    double rate;

    cout << "Enter worker's name: ";
    cin >> name;
    cout << "Enter nubmer of hours worked(integer): ";
    cin >> hours;
    cout << "Enter the hourly rate(actual number): ";
    cin >> rate;

    double result = hours * rate;
    cout << fixed << setprecision(2);
    cout << "Worker " << name << " received a salary of " << result << " UAH\n";

    return 0;

}