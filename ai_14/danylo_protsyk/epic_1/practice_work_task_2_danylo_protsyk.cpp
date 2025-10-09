#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int working_hours;
    float hourly_rate;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your working hours: ";
    cin >> working_hours;
    cout << "Enter your hourly rate: ";
    cin >> hourly_rate;

    cout << "Worker "<< name << " has a salary of " << fixed << setprecision(2) << working_hours * hourly_rate << endl;
   return 0;
}