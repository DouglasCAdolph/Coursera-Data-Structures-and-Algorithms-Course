// Here, we are computing the LAST DIGIT (not the entire summation)!!

#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

long long int get_fibonacci_last_digit_fast(long long n){
  
    
    /* unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int c, i;
    
    if( n == 0) {
        return a;
    }
    
    for (i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    
    b = b%10;
    return b; // return last digit of your b (the fibonacci sum)
     
     */
    
    // NOTE THIS IS BECAUSE THE LAST DIGIT REPEATS EVERY 60 PLACES!!!!!!!!
    
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    
    int testModVal = n%60;
    
    if (testModVal == 0)
        return 0; 
    
    unsigned long long int c, i;
    
    if( n == 0) {
        return a;
    }
    
    for (i = 2; i <= testModVal; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    
    b = b%10;
    return b; // return last digit of your b (the fibonacci sum)
}

int main() {
    unsigned long long int n;
    std::cin >> n;
    //int c = get_fibonacci_last_digit_naive(n);
    unsigned long long int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    }

