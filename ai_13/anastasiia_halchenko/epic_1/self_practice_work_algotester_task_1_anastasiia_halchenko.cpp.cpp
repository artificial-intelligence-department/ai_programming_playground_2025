#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b;
 if (0 <= a && a <= 100 && 0 <= b && b <= 100) {
    c=a+b;
    cout << c;
 } else {
    cout << "Incorrect numbers";
 }
    

return 0;

}