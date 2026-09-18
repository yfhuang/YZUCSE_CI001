#include <iostream>     // Library for input and output
#include <stack>        // Library for stack, a simple LIFO structure
#include <string>       // Library for using strings
using namespace std;    // Use the standard C++ namespace

// This function checks whether parentheses are balanced.
// Example: "(())" is valid, but ")(" is invalid.
bool valid(const string& s) {
    // A stack stores opening parentheses we have seen.
    stack<char> st;

    // Read the string one character at a time.
    for (char c : s) {
        if (c == '(') {
            // If we see '(', store it in the stack.
            st.push(c);
        } else if (c == ')') {
            // If we see ')' but there is no matching '(', the string is invalid.
            if (st.empty()) return false;

            // Otherwise, remove the matching opening parenthesis.
            st.pop();
        }
    }

    // If the stack is empty at the end, all parentheses matched correctly.
    return st.empty();
}

int main() {
    // Step 1: Read a string containing parentheses.
    string s;
    cin >> s;

    // Step 2: Print whether the parentheses are valid.
    cout << (valid(s) ? "valid" : "invalid") << '\n';

    // Step 3: End the program successfully.
    return 0;
}
