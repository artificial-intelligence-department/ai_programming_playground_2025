#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    using namespace std;

    cout << "Enter name of the worker: ";
    string name;
    cin >> name;

    cout << "Enter the number of hours worked: ";
    int hours;
    cin >> hours;
    
    cout << "Enter the hour wage: ";
    float wage;
    cin >> wage;

    double salary = hours * wage;

    cout << "Працівник " << name << " отримав зарплату: " << fixed << setprecision(2) << salary << endl;
    return 0;
}

