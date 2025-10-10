#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");
    int n;
    int c = 0;
    cin >> n;
    while ( n - 500 >= 0) {
    n = n - 500;
    c++;
    }
    while ( n - 200 >= 0) {
    n = n - 200;
    c++;
    }
    while ( n - 100 >= 0) {
    n = n - 100;
    c++;
    }
    while ( n - 50 >= 0) {
    n = n - 50;
    c++;
    }
    while ( n - 20 >= 0) {
    n = n - 20;
    c++;
    }
    while ( n - 10 >= 0) {
    n = n - 10;
    c++;
    }
    while ( n - 5 >= 0) {
    n = n - 5;
    c++;
    }
    while ( n - 2 >= 0) {
    n = n - 2;
    c++;
    }
    while ( n - 1 >= 0) {
    n = n - 1;
    c++;
    }
    cout << c;
    return 0;
}