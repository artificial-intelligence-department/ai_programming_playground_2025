// 0011 Marichka and cookies
#include <iostream>
using namespace std;

int main()
{
  int packs_n;
  long long x, max_amount = 0;

  cin >> packs_n;
  for (int i = 0; i < packs_n; ++i)
  {
    cin >> x;
    max_amount += (x > 0) ? x - 1 : 0;
  }

  cout << max_amount;
  return 0;
}