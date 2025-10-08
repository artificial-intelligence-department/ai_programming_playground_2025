#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n % 2 != 0 || m % 2 != 0) {
        cout << "Larry";
    } else {
        cout << "Sergei";
    }
    return 0;
}




