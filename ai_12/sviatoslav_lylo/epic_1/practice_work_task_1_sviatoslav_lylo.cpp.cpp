#include <iostream>
using namespace std;

int main() {
    string name;
    int hours;
    float rate;
    
    cin >> name >> hours >> rate;
    cout << "Працівник/ця " << name << " отримав/ла зарплату " << hours * rate << " грн.";

    return 0;
}