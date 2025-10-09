#include <iostream>
using namespace std;
int main() {
long long R;
long long r;
cin >> R;
cin >> r;

if (3 * (R - r) * (R - r) < (R + r) * (R + r)){
  cout << "rumpled";

}  else { 
 
cout << "safe";    
}
    
    return 0;
}