#include <iostream>
#include <iomanip> 
using namespace std;

int main () {
    string name;
    int a; // відпрацьовані години
    double b;
    

    cout << "Enter your name: ";
    cin >> name; 

    cout << "Enter hours worked: ";
    cin >> a;

    cout << "Enter hourly rate: ";
    cin >> b;

    cout << "Employee " << name << " received salary: " << fixed << setprecision(2) << a * b;

    return 0;
}