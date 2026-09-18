#include <iostream>   // Library for input and output
using namespace std;  // Use the standard C++ namespace

int main() {
    // Step 1: Create two variables to store the numbers we will read.
    // long long is used to store large integers safely.
    long long a, b;

    // Step 2: Read two integers from the keyboard.
    // Example: if the user types 10 20, then a = 10 and b = 20.
    cin >> a >> b;

    // Step 3: Compute the sum and print it on the screen.
    // The '\n' means move to the next line after printing.
    cout << a + b << '\n';

    // Step 4: End the program successfully.
    return 0;
}
