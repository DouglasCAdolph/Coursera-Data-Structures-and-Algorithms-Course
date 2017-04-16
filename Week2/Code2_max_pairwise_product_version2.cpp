a#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<long long>& numbers) {
    long long result = 0;

    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j){
            if ((numbers[i]) * numbers[j] > result) {
                result = numbers[i] * numbers[j];
            }
        }
    }
    
    //cout << "Result is: " << result << std::endl << std::endl;
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
