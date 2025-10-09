#include <iostream> 
using namespace std;

int main() {
    long long k,l,min1,res;
    cin>>k;
    res = 0;

    for(int i =0;i<k;i++){
        cin>>l;
        if(res == 0){
            res+=1;
            min1 = l;
        }
        else if(min1>=l){
            res+=1;
            min1 = l;
        }


    }
cout<<res;
    return 0; 
}