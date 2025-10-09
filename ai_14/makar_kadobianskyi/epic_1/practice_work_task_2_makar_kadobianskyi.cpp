#include <iostream>
#include <cmath>


int main(){
    int v, p, t;
    scanf("%d %d %d", &v, &p, &t);
    int res = ceil(v * pow(1 + p/100.0, t));
    printf("%d", res);
    return 0;
}