#include <iostream>     // Library for input and output
#include <map>          // Library for map, which stores key-value pairs
#include <vector>       // Library for vector
using namespace std;    // Use the standard C++ namespace

int main() {
    // Step 1: Read how many numbers we will process.
    int n;
    cin >> n;

    // Step 2: Create a map called freq.
    // The key is a number, and the value is how many times it appears.
    // Example: if x = 3 appears twice, then freq[3] = 2.
    map<int, int> freq;

    // Step 3: Read each number and count its frequency.
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        // Increase the count for this number by 1.
        ++freq[x];
    }

    // Step 4: Print each number and how many times it appears.
    // "const auto& [value, count]" means: take each pair in the map.
    for (const auto& [value, count] : freq) {
        cout << value << ' ' << count << '\n';
    }

    // Step 5: End the program successfully.
    return 0;
}
