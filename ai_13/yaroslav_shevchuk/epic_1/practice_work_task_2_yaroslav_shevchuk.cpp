#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  string name;
  int hours;
  float rate;
  float salary;

  cout << "Ім'я:";
  cin >> name;
  cout << "К-ть годин:";
  cin >> hours;
  cout << "Погодинна ставка:";
  cin >> rate;

  salary = hours * rate;
  cout << name << " отримав зарплату " << salary << "грн за " << hours << " годин роботи.";
  return 0;
}
