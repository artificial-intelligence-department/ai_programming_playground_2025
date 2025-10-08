#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m; 
    int c = (n*m)%2;
    if (c==0){
        cout << "Dragon";
    }
    else{
        cout << "Imp";
    }
}