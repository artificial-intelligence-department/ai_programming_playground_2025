#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n_of_packs;
    long long n_of_cookies;
    cin >> n_of_packs;
    long long sum=0;
    for (long long i=0; i<n_of_packs; i++){
        cin >> n_of_cookies;
        sum+=n_of_cookies-1;
    }
    cout<< sum;
    return 0;
}