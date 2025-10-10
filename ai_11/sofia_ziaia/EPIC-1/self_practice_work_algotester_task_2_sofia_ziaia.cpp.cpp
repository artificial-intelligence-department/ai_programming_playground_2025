#include <iostream>

int main()
{
    using namespace std;

    unsigned int n, m;
    cin >> n >> m;

    if (n < 1 || n > 100 || m < 1 || m > 100)
    {
        return 0;
    }

    int total = n * m;

    if (total % 2 == 1)
    {
        cout << "Imp";
    }
    else
    {
        cout << "Dragon";
    }

    return 0;
}