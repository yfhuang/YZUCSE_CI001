#include <iostream>   // Library for input and output
using namespace std;  // Use the standard C++ namespace

int main() {
    // Step 1: Create two variables to store the numbers we read.
    long long a, b;

    // Step 2: Keep reading pairs of numbers until there is no more input.
    // The condition "cin >> a >> b" returns false when the input ends.
    while (cin >> a >> b) {
        // Step 3: Add the two numbers and print the result.
        cout << a + b << '\n';
    }

    // Step 4: End the program when there is no more input.
    return 0;
}
