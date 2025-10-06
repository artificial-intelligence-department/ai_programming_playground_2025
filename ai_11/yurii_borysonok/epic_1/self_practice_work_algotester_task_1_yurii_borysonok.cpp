#include <iostream>
using namespace std;

int main() {

    long long n;
    if (!(cin >> n)) return 0;

    int d[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    long long cnt = 0;
    for (int x : d) {
        cnt += n / x;   
        n %= x;         
        if (n == 0) break;
    }

    cout << cnt << '\n';
    return 0;
}
