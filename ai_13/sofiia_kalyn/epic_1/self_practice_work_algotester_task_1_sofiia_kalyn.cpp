#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 1000000000) {
        return 0;
    }

    int quantity = 0;

    if (n>=500) {
        quantity += n/500;
        n %= 500;
    }
    if (n >= 200) {
        quantity += n / 200;
        n %= 200;
    }
    if (n >= 100) {
        quantity += n / 100;
        n %= 100;
    }
    if (n >= 50) {
        quantity += n / 50;
        n %= 50;
    }
    if (n >= 20) {
        quantity += n / 20;
        n %= 20;
    }
    if (n >= 10) {
        quantity += n / 10;
        n %= 10;
    }
    if (n >= 5) {
        quantity += n / 5;
        n %= 5;
    }
    if (n >= 2) {
        quantity += n / 2;
        n %= 2;
    }
    if (n >= 1) {
        quantity += n / 1;
        n %= 1;
    }
    cout << quantity;
    return 0;
}