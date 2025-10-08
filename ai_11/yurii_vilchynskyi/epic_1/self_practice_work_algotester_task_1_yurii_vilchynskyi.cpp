#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    int n; // ціна
    int count = 0; // кількість використаних купюр
    cout << "Впиши прайс подарунку: ";
    cin >> n;

    int banknotes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    

    for (int i = 0; i < 9; i++) {
        count += n / banknotes[i]; // ділення на ціле число 
        n %= banknotes[i]; // остача 
    }

    cout << "Щоб оплатити без решти треба використати " << count << " купюр(и)";
    return 0;
}