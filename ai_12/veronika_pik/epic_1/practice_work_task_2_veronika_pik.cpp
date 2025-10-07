#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    string name;
    cout << "Please enter employee name ";
    cin >> name;

    int hours;
    cout << "Please enter number of hours worked ";
    cin >> hours;

    double hourlyRate;
    cout << "Please enter hourly rate ";
    cin >> hourlyRate;

    double salary = hours * hourlyRate;
    cout << name << " "<< fixed << setprecision(2)  << salary << " UAH";

    return 0;
}