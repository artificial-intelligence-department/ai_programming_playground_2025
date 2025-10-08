#include <iostream>
#include <vector>
using namespace std;

long long MaxPairwiseProduct(const std::vector<long long>& numbers){
    long long max = 0;
    long long  n = numbers.size();
    long long first=0 , second=0;
    long long index=0;

    for (int i=0 ; i<n ;i++ ){
        if (numbers[i] > first){
            first = numbers[i];
            index = i;
        }

        }
    for (int j = 0 ; j < n ; j++){
        if ((numbers[j] > second) && j != index){
            second = numbers[j];
        }

    }
    return first*second;

}

int main() {
    long long  n;
    std::cin >> n;
    std::vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    cout << MaxPairwiseProduct(numbers) << endl;
    
}