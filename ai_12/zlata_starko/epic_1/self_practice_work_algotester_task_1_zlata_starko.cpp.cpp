#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;

    if (a>=0 && b<=100){
        cout << a + b << endl;
    }
    else {
        cout<<"Error"<<endl;
    }
    return 0;
}