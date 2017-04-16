#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<long long>& numbers) {
    long long result = 0;
    long long largestVal;
    long long secondLargestVal;
    int n = numbers.size();
    
    if (n < 2 || n > 200000)
        cout << "Error. Vector invalid size";
    
    if (n == 2){
    
        long long twoToReturnTogether = numbers[0] * numbers[1];
        return twoToReturnTogether;
    }
   
    if (numbers[0] > numbers[1]){
        largestVal = numbers[0];
        secondLargestVal = numbers[1];
    }
    else {
        largestVal = numbers[1];
        secondLargestVal = numbers[0];
    }
    
    for (int i = 2; i < n; ++i) {
        if (numbers[i] >= largestVal){
            secondLargestVal = largestVal;
            largestVal = numbers[i];
        }
    }
    
    result = largestVal * secondLargestVal;
    
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
