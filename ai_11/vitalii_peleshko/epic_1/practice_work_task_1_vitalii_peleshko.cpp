#include <iostream>
#include <locale>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");
    string name;
    int t;
    float s, a;
    cin >> name;
    cin >> t;
    cin >> s;
    a = t * s;
    cout << fixed << setprecision(2);
    cout << "Працівник " << name << " отримав зарплату:" << a;
    return 0;
}