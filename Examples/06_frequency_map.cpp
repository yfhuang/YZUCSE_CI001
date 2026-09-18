#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++freq[x];
    }

    for (const auto& [value, count] : freq) {
        cout << value << ' ' << count << '\n';
    }

    return 0;
}
