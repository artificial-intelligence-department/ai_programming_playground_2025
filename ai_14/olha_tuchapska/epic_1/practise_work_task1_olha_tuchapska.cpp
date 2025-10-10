#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int number_of_hours;
    float hourly_rate;

    cin >> name >> number_of_hours >> hourly_rate;

    cout << "Працівник" << " " << name << " " << "отримав" << " " << fixed << setprecision(2) << number_of_hours * hourly_rate << " " << "грн." << endl;
}