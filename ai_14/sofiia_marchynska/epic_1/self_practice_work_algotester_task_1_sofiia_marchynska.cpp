#include <iostream>
using namespace std;

int main () {
    int n, number = 0;
    cin >> n;
    int money [9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 9; i++) {
        number += n / money[i];
        n = n %money[i];
    };
    cout << number << endl;
    return 0;
};
