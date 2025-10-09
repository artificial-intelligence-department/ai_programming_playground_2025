#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
 string worker_name;
 int work_hour;
 double hour_rate;
cin >> worker_name;
cin >> work_hour;
cin >>hour_rate;
double zarp =  work_hour * hour_rate;
cout << "Працівник " << worker_name << " отримав таку зарплату: " ;
printf("%.2lf", zarp);



    return 0;
}