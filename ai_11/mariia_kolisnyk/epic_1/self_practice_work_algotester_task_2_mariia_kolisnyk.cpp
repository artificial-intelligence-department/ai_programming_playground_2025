#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    cin >> n >> m;

    int a = m * n;

    if (a % 2 == 0) {
        cout << "Dragon";
    } else {
        cout << "Imp";
    }
}





