#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x > 0) {
        cout << "positive\n";
    } else if (x == 0) {
        cout << "zero\n";
    } else {
        cout << "negative\n";
    }

    return 0;
}
