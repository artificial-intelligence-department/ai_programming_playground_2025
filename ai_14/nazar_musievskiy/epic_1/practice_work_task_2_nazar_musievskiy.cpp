#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string name;
    int t;
    double rate;
    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter working time: \n";
    cin >> t;
    cout << "Enter rate per hour: \n";
    cin >> rate;
    cout << fixed << setprecision(2);
    cout << name << " recieved " << rate * t;
    return 0;
}