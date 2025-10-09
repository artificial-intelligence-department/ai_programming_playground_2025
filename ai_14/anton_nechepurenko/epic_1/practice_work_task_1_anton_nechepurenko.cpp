#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    char name[50];
    int hours = 0;
    float hours_rate = 0;
    float result;

    cout << "Hello" << '\n';
    cout << "Enter your name: " << '\n';
    cin >> name;
    cout << '\n' << "Enter your hours: " << '\n';
    cin >> hours;
    cout << '\n' << "Enter your hour rate: " << '\n';
    cin >> hours_rate;

    result  = hours * hours_rate;

    cout << fixed << setprecision(2);
    cout << '\n' << "Worker " << name << " got salary of " << result << "uah" << '\n';
    return 0;
}