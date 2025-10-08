#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGcdForAll(const vector<int>& number_of_votes_for_each_party, int n) {
    int gcdForAll = number_of_votes_for_each_party[0];
    for(int j = 1; j < n; j++) {
        gcdForAll = gcd(gcdForAll, number_of_votes_for_each_party[j]);
        if (gcdForAll == 1) break; 
    }
    return gcdForAll;
}

vector<int> readInput(vector<int>& number_of_votes_for_each_party, int n) {
    for (int i = 0; i < n; i++) {
        cin >> number_of_votes_for_each_party[i];
    }
    return number_of_votes_for_each_party;
}

long int findSumOfPlaces(vector<int>& number_of_votes_for_each_party, vector<long int>& number_of_places_for_each_party, int n, int gcdForAll) {
    long int result = 0;
    for (int k = 0; k < n; k++) {
        result += number_of_votes_for_each_party[k] / gcdForAll;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> number_of_votes_for_each_party(n);
    number_of_votes_for_each_party = readInput(number_of_votes_for_each_party, n);

    int gcdForAll = findGcdForAll(number_of_votes_for_each_party, n);

    vector<long int> number_of_places_for_each_party(n);
    long int result = findSumOfPlaces(number_of_votes_for_each_party, 
        number_of_places_for_each_party, n, gcdForAll);

    cout << result << endl;
    return 0;
}