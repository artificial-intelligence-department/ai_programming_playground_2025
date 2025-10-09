#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name;
    int hours;
    float moneyperhour, salary;
    cout << "Ваше ім'я: ";
    cin >> name;
    cout << "Скільки повних годин ви працювали: ";
    cin >> hours;
    cout << "Ваша погодинна ставка: ";
    cin >> moneyperhour;
    salary = hours * moneyperhour;
    cout << "Працівник " << name << ", отримав зарплату: " << salary << " грн";
    return 0;

}
