#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long answer = 0;
    unsigned long long a_i;
    for (int i = 0; i < n; i++) {
        cin >> a_i;
        answer += a_i - 1;
    }
    cout << answer << endl;
    return 0;
}

