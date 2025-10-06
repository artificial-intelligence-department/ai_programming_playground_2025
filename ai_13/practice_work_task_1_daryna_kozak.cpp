#include <iostream>
#include <windows.h>
using namespace std;

int main() {

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  string name;
  cout << "¬вед≥ть ≥м'€:\n";
  cin >> name;

  int hours;
  cout << "¬вед≥ть к≥льк≥сть годин:\n";
  cin >> hours;

  float rate;
  cout << "¬вед≥ть погодинну ставку:\n";
  cin >> rate;
  float salary = hours * rate;
  cout << "ѕрац≥вник " << name << " маЇ зароб≥тну плату: " << salary << endl;



  return 0;
}