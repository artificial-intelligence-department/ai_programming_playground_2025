#include <iostream>
using namespace std;

int main (){
    long long n;
    int i = 0;
    cout;
    cin >>n;
    while (n >= 500) {
        i++;
        n -= 500;
    }
    while (n >= 200) {
        i++;
        n -= 200;
    }
    while (n >= 100) {
        i++;
        n -= 100;
    }
    while (n >= 50) {
        i++;
        n -= 50;
    }
    while (n >= 20) {
        i++;
        n-=20;
    }
    while (n >=10) {
        i++;
        n-=10;
    }
    while (n >=5) {
        i++;
        n-=5;
    }
    while (n>=2) {
        i++;
        n-=2;
    }
    while (n>=1) {
        i++;
        n-=1;
    }
    cout << i;
    return 0;
}