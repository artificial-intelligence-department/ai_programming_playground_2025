#include <iostream>
#include <windows.h>
using namespace std;

int main() {

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  string name;
  cout << "������ ��'�:\n";
  cin >> name;

  int hours;
  cout << "������ ������� �����:\n";
  cin >> hours;

  float rate;
  cout << "������ ��������� ������:\n";
  cin >> rate;
  float salary = hours * rate;
  cout << "��������� " << name << " �� �������� �����: " << salary << endl;



  return 0;
}