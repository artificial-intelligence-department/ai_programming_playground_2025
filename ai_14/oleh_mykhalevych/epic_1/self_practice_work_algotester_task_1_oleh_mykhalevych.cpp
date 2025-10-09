#include <iostream>
using namespace std;

int main() {
    double distanceToMars = 225000000;
    double v;
    
    cin >> v;
    
    double time = distanceToMars / v;
    
    cout << time;
}
