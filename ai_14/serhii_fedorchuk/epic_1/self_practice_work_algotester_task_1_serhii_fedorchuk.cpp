#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,i;
    ll s,g,a,b;
    cin >> n;                
    vector<ll> v(n);
    s = 0;
    for (i=0; i<n; i++) cin >> v[i];
      g = v[0];
    for (int i=1; i<n; i++) {
          a=g, b=v[i];
        while (b!=0) {
            ll temp=b;
            b=a%b;
            a=temp;
        }
        g=a;
    }
    for (int i=0; i<n; i++) {
        s+=v[i];
    }
    cout << s/g << "\n";      
    return 0;
}