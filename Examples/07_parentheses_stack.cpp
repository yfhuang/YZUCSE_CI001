#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool valid(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty()) return false;
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (valid(s) ? "valid" : "invalid") << '\n';
    return 0;
}
