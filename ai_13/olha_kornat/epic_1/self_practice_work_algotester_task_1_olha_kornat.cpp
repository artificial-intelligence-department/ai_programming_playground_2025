#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > 1) {
            total += a[i] - 1;
        }
    }

    cout << total << endl;

    return 0;
}