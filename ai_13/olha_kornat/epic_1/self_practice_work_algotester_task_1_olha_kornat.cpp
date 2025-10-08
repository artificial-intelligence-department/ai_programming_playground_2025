#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of cookie jars: ";
    cin >> n;

    vector<int> a(n); // Створюємо вектор розміром n

    cout << "Enter the number of cookies in each jar:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Jar #" << (i + 1) << ": ";
        cin >> a[i]; // Зчитуємо кількість печива для кожної пачки
    }

    int total = 0; // Загальна кількість печива, яке може з’їсти Марічка

    for (int i = 0; i < n; ++i) {
        if (a[i] > 1) {
            total += a[i] - 1; // З кожної пачки залишаємо 1 печиво
        }
    }

    cout << "Maximum cookies Marichka can eat without being noticed: " << total << endl;

    return 0;
}
