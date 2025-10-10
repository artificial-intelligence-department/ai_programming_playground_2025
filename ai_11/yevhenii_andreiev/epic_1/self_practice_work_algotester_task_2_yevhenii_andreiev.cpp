#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long cookies;
    long long result = 0;

    for (int i = 0; i < n; i++) {
        cin >> cookies;
        result += cookies - 1;
    }

    cout << result;

    return 0;
}