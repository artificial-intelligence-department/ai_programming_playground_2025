#include <iostream>
using namespace std;

int main() {
    int n;
    long pack, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> pack;
        sum = sum + pack - 1;
    }

    cout << sum << endl;
    
    return 0;
}