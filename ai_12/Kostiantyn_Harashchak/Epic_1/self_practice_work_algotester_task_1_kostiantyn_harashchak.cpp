#include  <iostream>
using namespace std;

int main() {
    int Mar = 0, Sof = 0, Pet = 0;
    cin >> Mar >> Sof >> Pet;
    if (Mar + Sof > Pet) {
        cout << "YES!";
    }
    else {
        cout << "NO!";
    }
    return 0;
}
