#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string name;
    cout << "Enter employee name:";
    cin >> name;

    int hours;
    cout << "Enter number of hours worked:";
    cin >> hours;

    double wage;
    cout << "Enter hourly wage:";
    cin >> wage;

    double salary = hours * wage;
   
    printf ("Employee: %s got a salary of %.2f", name.c_str(),  salary);
    
    
    return 0;
}