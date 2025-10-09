#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    double workingHours;
    double salaryPerHour;

    cout << "Enter employee's name: ";
    getline(cin, name);
    cout << "Enter the number of working hours: ";
    cin >> workingHours;
    cout << "Enter salary per hour: ";
    cin >> salaryPerHour;

    double salary = workingHours * salaryPerHour;

    cout << "Employee " << name << " received a salary " << salary << " UAN.";



    return 0;
}