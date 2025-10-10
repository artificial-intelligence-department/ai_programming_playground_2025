#include <iostream>
#include <iomanip>

using namespace std;
int main() {
 string name;
 int w_time;
 double h_rate;
 double salary;
 
 cout << "Enter worker's full name: ";
 getline(cin, name);

 cout << "\nEnter working time: ";
 cin >> w_time;

 cout << "\nEnter hourly rate: ";
 cin >> h_rate;

 salary = w_time * h_rate;

 cout << fixed << setprecision(2);

 cout << "\nWorker " << name << " earned " << salary << " uah";
 return 0;
}