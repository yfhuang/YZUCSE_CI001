# Learning Input Patterns for UVa/CPE

Knowing the algorithm is not enough. Online judges often differ mainly in **how input ends**.

Master these patterns early.

---

## Pattern 1 — One value

```cpp
int n;
cin >> n;
```

---

## Pattern 2 — Fixed number of values

```cpp
int a, b;
cin >> a >> b;
```

---

## Pattern 3 — Number of test cases

Input begins with `T`.

```cpp
int T;
cin >> T;

while (T--) {
    int n;
    cin >> n;

    // solve one case
}
```

### Important

Reset per-case variables inside the loop.

Bad:

```cpp
int sum = 0;

while (T--) {
    // sum accidentally contains previous case
}
```

Better:

```cpp
while (T--) {
    int sum = 0;
    // process one case
}
```

---

## Pattern 4 — Until EOF

There is no test-count and no special stopping value.

```cpp
int a, b;

while (cin >> a >> b) {
    cout << a + b << '\n';
}
```

This is extremely common in UVa.

---

## Pattern 5 — Sentinel

Input stops when a special value appears.

```cpp
int n;

while (cin >> n && n != 0) {
    // solve
}
```

Sometimes the sentinel line contains multiple values.

```cpp
int a, b;

while (cin >> a >> b) {
    if (a == 0 && b == 0) break;

    // solve
}
```

---

## Pattern 6 — Whole line

Use `getline` when spaces are meaningful.

```cpp
string line;

while (getline(cin, line)) {
    cout << line << '\n';
}
```

---

## Mixing `cin >>` and `getline`

This can be surprising:

```cpp
int n;
cin >> n;

string line;
getline(cin, line);
```

The first `getline` may read the remaining newline.

One common solution:

```cpp
cin.ignore(numeric_limits<streamsize>::max(), '\n');
getline(cin, line);
```

Include:

```cpp
#include <limits>
```

---

## Pattern 7 — Read a known number of values into a vector

```cpp
int n;
cin >> n;

vector<int> a(n);

for (int& x : a) {
    cin >> x;
}
```

---

## Pattern 8 — Matrix input

```cpp
int rows, cols;
cin >> rows >> cols;

vector<vector<int>> a(rows, vector<int>(cols));

for (int r = 0; r < rows; ++r) {
    for (int c = 0; c < cols; ++c) {
        cin >> a[r][c];
    }
}
```

---

# Input recognition checklist

Before coding, mark the input format:

- [ ] one test only
- [ ] `T` test cases
- [ ] until EOF
- [ ] sentinel
- [ ] whole lines
- [ ] fixed-size sequence
- [ ] variable-size sequence
- [ ] matrix
- [ ] mixed text/numbers

If you cannot identify how input stops, do not start implementing the algorithm yet.

# Mini practice

For each pattern above, create a tiny program that reads values and simply echoes them. This isolates input learning from algorithm learning.
