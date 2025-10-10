#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

double countViews(double views, double growth, double time)
{
  double count = views;
  count += count * pow((1 + growth / 100), time);
  return count;
}

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  double views, growth, time;
  double count;

  cout << "К-ть переглядів:";
  cin >> views;
  cout << "Приріст у %:";
  cin >> growth;
  cout << "К-ть днів:";
  cin >> time;

  count = countViews(views, growth, time);

  cout << "Приріст:" << count << endl;
  cout << "К-ть переглядів через " << time << " днів: " << round(count);
  return 0;
}
