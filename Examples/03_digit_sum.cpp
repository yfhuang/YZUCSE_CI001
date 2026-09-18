#include <iostream>   // Library for input and output
using namespace std;  // Use the standard C++ namespace

int main() {
    // Step 1: Read a number from the keyboard.
    int n;
    cin >> n;

    // Step 2: Keep adding the last digit of the number into sum.
    // We repeat this until all digits are processed.
    int sum = 0;
    while (n > 0) {
        // Take the last digit: n % 10
        sum += n % 10;

        // Remove the last digit: n /= 10
        n /= 10;
    }

    // Step 3: Print the final sum of the digits.
    cout << sum << '\n';

    // Step 4: End the program successfully.
    return 0;
}
