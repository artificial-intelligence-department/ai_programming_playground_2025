#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Enter number of biscuits packs:";
 cin >> n;
long long sum = 0;
for (int i = 0; i < n; ++i) {
    long long x;
    cout << "Enter number of biscuits in pack " << i + 1 << ":";
    cin >> x;
    sum += x - 1;
}
cout << sum;
return 0;
}