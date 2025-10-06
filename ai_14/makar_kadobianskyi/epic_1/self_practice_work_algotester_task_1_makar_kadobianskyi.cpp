#include <iostream>
using namespace std;

int main() {
    int n;
    long int cookies;
    long int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d", &cookies);
        sum += cookies - 1;
    }
    printf("%d", sum);
    return 0;
}