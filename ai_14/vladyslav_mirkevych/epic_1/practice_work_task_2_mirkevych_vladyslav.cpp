#include <iostream>
#include <string>
using namespace std ;
int main()
{ 
    string name;
    int workedhours;
    double stavka;
    cin >> name >> workedhours >> stavka;
    cout << name << " " << stavka*workedhours;
    return 0;
     
}

