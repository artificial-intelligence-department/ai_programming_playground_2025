#include <iostream>
int main() {
    int n;
    int banknotes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    std::cin >> n;
    
    int count = 0; 
    
    for (int i = 0; i < 9; i++) {
        count += n / banknotes[i];  
        n = n % banknotes[i];       
    }
    
    std::cout << count << std::endl;

    return 0;
}