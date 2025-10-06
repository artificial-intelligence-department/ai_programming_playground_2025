#include <iostream>

using namespace std;

int main() {
    int n, x = 0;

    cin >> n;

    while (n >= 500) {
        n = n - 500;
        x++;
    }

    while (n >= 200) {
        n = n - 200;
        x++;
    }

    while (n >= 100) {
        n = n - 100;
        x++;
    }

    while (n >= 50) {
        n = n - 50;
        x++;
    }

    while (n >= 20) {
        n = n - 20;
        x++;
    }

    while (n >= 10) {
        n = n - 10;
        x++;
    }

    while (n >= 5) {
        n = n - 5;
        x++;
    }

    while (n >= 2) {
        n = n - 2;
            x++;
    }
                                    
    while (n >= 1) {
        n = n - 1;
        x++;
    }
    
    cout << x;

    return 0;
}