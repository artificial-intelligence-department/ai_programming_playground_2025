#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string Name;
    int Hours = 0;
    float Rate = 0;
    float Sum = 0;

    cout << "First name: ";
    cin >> Name;
    cout << "Worked hours: ";
    cin >> Hours;
    cout << "Hourly rate: ";
    cin >> Rate;
    Sum = Rate * Hours;
    cout << fixed << setprecision(2) << "Worker " << Name << " received his salary: " << Sum;
    return 0;
}