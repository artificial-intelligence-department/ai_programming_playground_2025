#include <iostream>

using namespace std;
int main() {
    
    string name;
    cout << "Enter name:\n";
    cin >> name;

    int hours;
    cout << "Number of hours worked : \n";
    cin >> hours;

    float rate;
    cout << "Hourly rate\n";
    cin >> rate;

  float salary;
    salary = hours * rate;
    cout << " Worker " << name << " got salary : " << salary << " UAH." << endl;
    return 0;
}