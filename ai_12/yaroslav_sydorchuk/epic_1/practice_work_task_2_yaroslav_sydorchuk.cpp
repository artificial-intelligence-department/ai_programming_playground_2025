#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    int hours;
    float salary_per_hour;

    cin >> name >> hours >> salary_per_hour;
    cout << "Працівник " << name << " отримав зарплату: " << fixed << setprecision(2) << hours * salary_per_hour << " грн" << endl;

    return 0;
}