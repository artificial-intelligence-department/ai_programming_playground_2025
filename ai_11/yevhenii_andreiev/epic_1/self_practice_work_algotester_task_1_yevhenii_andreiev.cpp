#include <stdio.h>

int main() {
    const short banknotes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    unsigned long long n;
    
    scanf("%llu", &n);

    unsigned long long result = 0;
    unsigned int amount;

    for (int i = 0; i < 9; i++) {
        amount = n / banknotes[i];
        result += amount;
        n -= amount * banknotes[i];
    }

    printf("%llu", result);

    return 0;
}