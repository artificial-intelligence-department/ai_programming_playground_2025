// Lab1v2_Algotester

#include <iostream>
using namespace std;

long largest_h(long h[]){
    long largestH = h[0];
    for(int i = 1; i < 4; i++){
        if(largestH<h[i]){
            largestH = h[i];
        }
    }
    return largestH;
}

long smallest_h(long h[]){
    long smallestH = h[0];
    for(int i = 1; i < 4; i++){
        if(smallestH>h[i]){
            smallestH = h[i];
        }
    }
    return smallestH;
}

int main(){
    long h[4] = {};
    long d[4] = {};
    cin >> h[0] >> h[1] >> h[2] >> h[3];
    cin >> d[0];
    cin >> d[1];
    cin >> d[2];
    cin >> d[3];

    bool ifFlipped = false;
    for(int i = 0; i < 4; i++){
        h[i] = h[i] - d[i];
        if(h[i]<0){
            cout << "ERROR";
            return 0;
        }
        if(largest_h(h)>=2*smallest_h(h)){
            ifFlipped = true;
        }
    }
    
    if(!ifFlipped && smallest_h(h)>0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}