#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long x;
    long long y;
    long long accumulated_xy = 0;

    long long max_y = 0;
    long long max_x = 0;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        accumulated_xy = accumulated_xy + x + y;
        if(x > max_x){
            max_x = x;
        }
        if(y > max_y){
            max_y = y;
        }
    }
    long long time = n*(max_y+max_x) - accumulated_xy;

    cout << time << endl;

}
