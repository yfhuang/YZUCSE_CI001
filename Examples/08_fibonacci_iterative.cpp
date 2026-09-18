#include <iostream>     // Library for input and output
using namespace std;    // Use the standard C++ namespace

// This function computes the n-th Fibonacci number.
// Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, ...
long long fibonacci(int n) {
    // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1.
    if (n <= 1) return n;

    // We keep two previous numbers:
    // a = Fibonacci(i-2), b = Fibonacci(i-1)
    long long a = 0;
    long long b = 1;

    // Start from i = 2 because we already know Fibonacci(0) and Fibonacci(1).
    for (int i = 2; i <= n; ++i) {
        // next = previous + current
        long long next = a + b;

        // Move the values forward.
        a = b;
        b = next;
    }

    // When the loop ends, b stores Fibonacci(n).
    return b;
}

int main() {
    // Step 1: Read the index n.
    int n;
    cin >> n;

    // Step 2: Print the n-th Fibonacci number.
    cout << fibonacci(n) << '\n';

    // Step 3: End the program successfully.
    return 0;
}
