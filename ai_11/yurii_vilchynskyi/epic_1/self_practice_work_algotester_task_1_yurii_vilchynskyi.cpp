#include <iostream>
using namespace std;

int main() {
    int n; // ціна
    int count = 0; // кількість використаних купюр
    cin >> n;

    int banknotes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    

    for (int i = 0; i < 9; i++) {
        count += n / banknotes[i]; // ділення на ціле число 
        n %= banknotes[i]; // остача 
    }

    cout << count;
    return 0;
}