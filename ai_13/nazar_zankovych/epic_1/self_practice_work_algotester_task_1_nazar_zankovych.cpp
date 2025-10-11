#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    double ans = r / sqrt(n);
    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}
