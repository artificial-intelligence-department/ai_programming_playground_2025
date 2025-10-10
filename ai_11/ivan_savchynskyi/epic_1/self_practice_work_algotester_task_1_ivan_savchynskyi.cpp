#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    if (!(cin >> n)) return 0;
    
    vector<int> bills = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    long long cnt = 0;
    for (int b : bills) {
        if (n <= 0) break;
        cnt += n / b;
        n %= b;
    }
    cout << cnt << '\n';
    return 0;
}