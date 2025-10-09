#include <stdio.h>

int main() {
    int n, b, y;
    scanf("%d %d %d", &n, &b, &y);

    int fence[n];
    for (int i = 0; i < n; i++) {
        fence[i] = 0;
    }

    for (int i = 0; i < n; i += 2*b) {
        for (int j = i; j < i + b && j < n; j++) {
            fence[j] = 1;
        }
    }

    for (int i = 0; i < n; i += 2*y) {
        for (int j = i; j < i + y && j < n; j++) {
            if (fence[j] == 1) {
                fence[j] = 3;
            } else {
                fence[j] = 2;   
            }
        }
    }

    int changes = 0;
    for (int i = 1; i < n; i++) {
        if (fence[i] != fence[i-1]) {
            changes++;
        }
    }

    printf("%d\n", changes);

    return 0;
}
