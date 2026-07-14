# Supplement 06: Iteration vs. Recursion (C++)

## 1. Definition

### Iteration
Iteration is a technique that repeats a block of code using loop constructs such as `for`, `while`, or `do-while` until a condition becomes false.

### Recursion
Recursion is a technique where a function calls itself to solve smaller instances of the same problem, and stops at a **base case**.

---

## 2. Similarities and Differences

### Similarities
- Both are used to repeat computation.
- Both must have a termination condition.
- Both can solve many of the same problems.
- Both can be correct and efficient when designed well.

### Differences

| Aspect | Iteration | Recursion |
|--------|-----------|-----------|
| **Mechanism** | Loop statements | Function calls itself |
| **Memory Usage** | Usually O(1) extra stack | O(depth) call stack |
| **Performance** | Usually lower overhead | Extra function call overhead |
| **Readability** | Clear for linear processes | Often clearer for trees/divide-and-conquer |
| **Risk** | Infinite loop if condition wrong | Stack overflow if depth is large |
| **State Management** | Explicit loop variables | Implicit in call frames and parameters |

---

## 3. C++ Examples

### Example 1: Factorial

**Iterative Approach**
```cpp
#include <bits/stdc++.h>
using namespace std;

long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    cout << factorial_iterative(5) << '\n'; // 120
    return 0;
}
```

**Recursive Approach**
...existing code...

**Recursive Approach**
```cpp
#include <bits/stdc++.h>
using namespace std;

long long factorial_recursive(int n) {
    if (n <= 1) return 1;               // base case
    return 1LL * n * factorial_recursive(n - 1); // recursive call
}

int main() {
    cout << factorial_recursive(5) << '\n'; // 120
    return 0;
}
```

> Note: `1LL` means the integer literal `1` of type `long long`.  
> It forces the multiplication to be evaluated in `long long` arithmetic (`64-bit`), reducing overflow risk from `int` intermediate calculations.

---

### Example 2: Sum of Array Elements

**Iterative Approach**
```cpp
#include <bits/stdc++.h>
using namespace std;

int sum_array_iterative(const vector<int>& arr) {
    int total = 0;
    for (int x : arr) total += x;
    return total;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    cout << sum_array_iterative(a) << '\n'; // 15
    return 0;
}
```

**Recursive Approach**
```cpp
#include <bits/stdc++.h>
using namespace std;

int sum_array_recursive(const vector<int>& arr, int index = 0) {
    if (index == (int)arr.size()) return 0; // base case
    return arr[index] + sum_array_recursive(arr, index + 1);
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    cout << sum_array_recursive(a) << '\n'; // 15
    return 0;
}
```

---

### Example 3: Binary Search

**Iterative Approach**
```cpp
#include <bits/stdc++.h>
using namespace std;

int binary_search_iterative(const vector<int>& arr, int target) {
    int left = 0, right = (int)arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    cout << binary_search_iterative(a, 5) << '\n'; // 2
    return 0;
}
```

**Recursive Approach**
```cpp
#include <bits/stdc++.h>
using namespace std;

int binary_search_recursive(const vector<int>& arr, int target, int left, int right) {
    if (left > right) return -1; // base case
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binary_search_recursive(arr, target, mid + 1, right);
    return binary_search_recursive(arr, target, left, mid - 1);
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    cout << binary_search_recursive(a, 5, 0, (int)a.size() - 1) << '\n'; // 2
    return 0;
}
```

---

## 4. Summary and Reflection

### When to Use Iteration
- The process is naturally sequential.
- You need better runtime overhead control.
- Input size can be large and deep recursion is unsafe.

### When to Use Recursion
- The problem is naturally recursive (DFS, tree traversal, divide-and-conquer).
- Recursive structure improves clarity.
- Maximum recursion depth is small or controlled.

### C++ Practical Notes
- In C++, deep recursion may cause **stack overflow**.
- Tail-call optimization is not guaranteed by all compilers/settings.
- For large-depth problems, prefer iterative solutions (often with `stack`/`queue`).

### Key Takeaway
Both methods are essential. Choose based on correctness, readability, and resource limits. In C++, iteration is often safer for large input sizes, while recursion is often cleaner for hierarchical problems.
