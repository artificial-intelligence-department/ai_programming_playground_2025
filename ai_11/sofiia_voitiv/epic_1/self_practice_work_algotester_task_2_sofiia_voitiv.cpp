#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    long long total = 0;

    for (int i = 0; i < n; ++i) {
       
        int a;
        cin >> a;
        total += (a-1);

    }

    cout << total;
    return 0;
}
