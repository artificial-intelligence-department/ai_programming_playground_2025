#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    int n;
    double x;
    cin >> name >> n >> x;
    cout<<"Pratsivnyk "<< name <<" otrymav zarplatu: "<< fixed << setprecision(2) <<x*n << " grn" << endl;

    return 0;
}