#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n;

    long long a = 0;
    long long b = 1;

    for (int i = 2; i <= n; ++i) {
        long long next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << '\n';
    return 0;
}
