#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int first, current, min, max;
    std::cin >> first;
    min = max = first;

    for (int i = 1; i < n; ++i) {
        std::cin >> current;
        if (current < min) min = current;
        else if (current > max) max = current;
    }

    std::cout << max - min << std::endl;

    return 0;
}
