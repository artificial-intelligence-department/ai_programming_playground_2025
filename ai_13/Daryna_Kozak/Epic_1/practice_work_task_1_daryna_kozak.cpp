#include <iostream>

using namespace std;

int main() {

 
  string name;
  cout << "Enter your name:\n";
  cin >> name;

  int hours;
  cout << "Enter the number of hours:\n";
  cin >> hours;

  float rate;
  cout << "Enter the hourly rate:\n";
  cin >> rate;
  float salary = hours * rate;
  cout << "Employee " << name << " has a salary of: " << salary << endl;



  return 0;
}