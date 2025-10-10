#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int num_of_parties;
    long long final_num_of_representatives = 0;

    cin >> num_of_parties;

    long long parties[num_of_parties];

    for (int i = 0; i < num_of_parties; i++) {
        cin >> parties[i];
    }
    
    long long g = parties[0];
    
    for (int i = 1; i < num_of_parties; i++) {
        g = gcd(g, parties[i]);
    }

    for (int i = 0; i < num_of_parties; i++) {
        final_num_of_representatives += parties[i] / g;
    }

    cout << final_num_of_representatives;
    
    return 0;
}
