#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    long long g = a[0];
    for (int i = 1; i < n; ++i) g = gcd(g, a[i]);
    
    long long total = 0;
    for (long long x : a) total += x / g;
    
    cout << total << endl;
    return 0;
}
