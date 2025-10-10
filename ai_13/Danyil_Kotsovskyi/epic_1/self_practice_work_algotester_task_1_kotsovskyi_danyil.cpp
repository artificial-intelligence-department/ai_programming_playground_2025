#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int CalculateAverage(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()/2];
}

int CalculateTrust(vector<int> a,vector<int> b,vector<int> c,int avg_a,int avg_b,int avg_c,int count){
    int trust=0;
    for(int i = 0; i < count ; i++)
        trust += abs(avg_a - a[i]) + abs(avg_b - b[i]) + abs(avg_c - c[i]);
    return trust;
}

int main() {
    int n , avg_a , avg_b , avg_c;
    cin >> n;
    vector<int> a(n),b(n),c(n);
    for(int i =0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];
    avg_a = CalculateAverage(a);
    avg_b = CalculateAverage(b);
    avg_c = CalculateAverage(c);
    cout << CalculateTrust(a,b,c,avg_a,avg_b,avg_c,n);


    return 0;
}