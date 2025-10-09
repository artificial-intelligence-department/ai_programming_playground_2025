#include <iostream>
using namespace std;

int main() {
    long long H, M;
    cin >> H >> M;
    bool rapidansw = false;
    // rapidansw - костиль, який займає добру половину коду з функцією кенсела раннього брейку циклу

    for (int i = 0; i < 3; i++) {
        long long H1, M1;
        cin >> H1 >> M1;
        if (!rapidansw && (H1 > 0 && M1 > 0)) {
            rapidansw = true;
        }
        H -= H1;
        M -= M1;
    }

    if (rapidansw || H <= 0 || M <= 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}