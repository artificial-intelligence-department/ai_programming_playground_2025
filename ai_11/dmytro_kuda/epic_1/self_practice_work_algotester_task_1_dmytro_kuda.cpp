#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    do {
        cin >> n; // enter the code
    } while (n < 0);

    while (n >= 500) {
        count++;
        n -= 500;
    }
    while (n >= 200) {
        count++;
        n -= 200;
    }
    while (n >= 100) {
        count++;
        n -= 100;
    }
    while (n >= 50) {
        count++;
        n -= 50;
    }
    while (n >= 20) {
        count++;
        n -= 20;
    }
    while (n >= 10) {
        count++;
        n -= 10;
    }
    while (n >= 5) {
        count++;
        n -= 5;
    }
    while (n >= 2) {
        count++;
        n -= 2;
    }
    while (n >= 1) {
        count++;
        n -= 1;
    }

    cout << count << endl;
    return 0;
}