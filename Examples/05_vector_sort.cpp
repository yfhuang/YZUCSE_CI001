#include <algorithm>    // For the sort() function
#include <iostream>     // For input and output
#include <vector>       // For vector, a dynamic array
using namespace std;    // So we can write cout, cin, vector directly

int main() {
    // Step 1: Ask the user how many numbers we will read.
    // Example: if the user types 5, we will store 5 numbers.
    int count;
    cin >> count;

    // Step 2: Create a container named "numbers" with exactly "count" slots.
    // A vector is like a list that can grow or shrink.
    // Here, it is fixed to the size the user entered.
    vector<int> numbers(count);

    // Step 3: Read each number from the keyboard and save it into the list.
    // The loop runs from 0 to count - 1.
    for (int i = 0; i < count; ++i) {
        cin >> numbers[i];
    }

    // Step 4: Sort the numbers in increasing order.
    // After this line, the list becomes: smallest -> biggest.
    // Example: 7, 3, 5 becomes 3, 5, 7.
    sort(numbers.begin(), numbers.end());

    // Step 5: Print the sorted numbers.
    // We add a space before every number except the first one.
    // This makes the output look like: 3 5 7 instead of 357.
    for (int i = 0; i < count; ++i) {
        if (i > 0) {
            cout << ' ';
        }
        cout << numbers[i];
    }

    // Step 6: Move to the next line after printing all numbers.
    cout << '\n';

    // Step 7: End the program successfully.
    return 0;
}
