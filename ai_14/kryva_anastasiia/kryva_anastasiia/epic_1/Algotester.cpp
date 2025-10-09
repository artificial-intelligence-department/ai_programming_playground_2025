#include <iostream>
using namespace std;

int main() {
    int n; // variable for the gift price
    cin >> n; // read the price

    // Array of all possible Ukrainian banknotes
    int bills[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    int total = 0; // total number of banknotes

    // Go through each banknote from biggest to smallest
    for (int i = 0; i < 9; i++) {
        total += n / bills[i]; // how many of this banknote are needed
        n = n % bills[i]; // what remains to be paid
    }

    cout << total; // print the minimum number of banknotes

    return 0; // program ends successfully
}