#include <iostream>

int main() {
    int a, b;
    
    
    if (!(std::cin >> a >> b)) {
        return 1;
    }
    
    std::cout << a + b << std::endl;
    
    return 0;
}