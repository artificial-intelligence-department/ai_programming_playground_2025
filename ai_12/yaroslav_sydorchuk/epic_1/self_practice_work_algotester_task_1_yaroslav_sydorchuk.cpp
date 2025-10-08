#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long tmp;
    long long res = 0;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        res += tmp > 0 ? tmp - 1 : 0;
    }

    cout << res << endl;

    return 0;
}