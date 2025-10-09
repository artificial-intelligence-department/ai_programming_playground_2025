#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    int hours_worked;
    float wage;

    cout << "введіть ім'я працівника" << endl; 
    cin >> name;
    cout << "введіть кількість робочих годин" << endl; 
    cin >> hours_worked;
    cout << "введіть зарплату" << endl; 
    cin >> wage;
    
    cout << fixed << setprecision(2);
    cout << "працівник " << name << " отримав зарплату: " << wage*hours_worked << " грн" << endl;
}