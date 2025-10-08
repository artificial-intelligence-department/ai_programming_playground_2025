//Верховна рада
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int number_party; // кількість партій
    cin >> number_party;

    if (number_party < 1 || number_party > 1000)
    {
        return 1;
    }
    vector<long long> votes(number_party);
    long long total_votes = 0;
    long long g = 0;
    for (int i = 0; i < number_party; i++)
    {
        cin >> votes[i];
        if (votes[i] < 1 || votes[i] > 1000000000)
        {
            return 1;
        }
        total_votes += votes[i];
        g = gcd(g, votes[i]);
    }

    cout << total_votes / g;
}
