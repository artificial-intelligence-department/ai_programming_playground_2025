#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string name;
    int b;
    float c, sal;
cout << "Employee`s name: ";
cin >> name;
cout << "Working hours: ";
cin >> b;
cout << "Hourly rate: ";
cin >> c;
sal = b * c;
cout << "Employee " << name << " received a salary: " << fixed << setprecision(2) << sal;
    return 0;
}