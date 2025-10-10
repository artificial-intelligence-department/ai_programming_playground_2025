#include <iostream>
using namespace std;

int main() {
    int l = 1;
    int h = 1000000000;
    char y;
    while (l <= h) {
        int x = l + (h - l) / 2;
        cout << x << endl;
        cout.flush();

        cin >> y;
        if (y == '=') {
            break;
        }
        else if (y == '<') {
            l = x + 1;
        }
        else if (y == '>') {
            h = x - 1;
        }
    }
    return 0;
}
