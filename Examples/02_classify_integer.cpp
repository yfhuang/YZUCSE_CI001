#include <iostream>   // Library for input and output
using namespace std;  // Use the standard C++ namespace

int main() {
    // Step 1: Read one integer from the keyboard.
    int x;
    cin >> x;

    // Step 2: Check whether the number is positive, zero, or negative.
    // The condition is tested in order.
    if (x > 0) {
        // If x is greater than 0, print "positive".
        cout << "positive\n";
    } else if (x == 0) {
        // If x is exactly 0, print "zero".
        cout << "zero\n";
    } else {
        // Otherwise, the number must be negative.
        cout << "negative\n";
    }

    // Step 3: End the program successfully.
    return 0;
}
