#include <iostream> 
#include <vector>
#include <utility>
#include <algorithm>
using ll = long long;
using namespace std;
using llp = pair<ll, ll>;

bool sorted(pair<ll, ll> a, pair<ll, ll> b) {
    return a.second < b.second;
}

int main() {
    ll n;
    cin >> n;

    vector<llp> mat;

    for (ll i = 0; i < n; ++i) {
        ll j;
        cin >> j;
        mat.push_back({i+1, j});
    }

    sort(mat.begin(), mat.end(), sorted);

    for (auto x : mat) {
        cout << x.first << " ";
    }

    return 0;
}