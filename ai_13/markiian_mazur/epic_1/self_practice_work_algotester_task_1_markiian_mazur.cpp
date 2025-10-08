#include <iostream> 
#include <array> 
using namespace std;

int main() {
    int money;
    int n = 0;
    array<int, 9> banknotes = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    cin >> money;

    for (int i=0; i<9; i++) {
        n += (money / banknotes[i]);
        money %= banknotes[i];
    }

    cout << n;

    return 0;
}