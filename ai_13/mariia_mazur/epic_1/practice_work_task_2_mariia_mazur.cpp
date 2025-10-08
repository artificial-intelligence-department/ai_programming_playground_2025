#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string name;
    cout << "name:";
    cin >> name;
    int hours;
    cout << "hours:";
    cin >> hours;
    float m_h;
    cout << "amount of money per hour: ";
    cin >> m_h;
    float salary=hours*m_h;
    cout << "salary:" << fixed << setprecision(2) << salary << "грн" << endl;
    cout << "Працівник(-ця) " << name << " отримав(-ла) " << salary << " грн";
}