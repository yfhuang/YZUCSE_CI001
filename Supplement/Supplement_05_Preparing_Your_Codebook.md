# Supplement 05: Preparing Your Codebook

This supplement helps students build a personal codebook for learning C++ in a structured way. The goal is to develop programming habits from scratch, not to memorize isolated tricks. Treat the codebook as a small, reusable reference that you keep refining after each problem you solve.

## What This Codebook Is For

A good codebook should help you:

1. Start every solution with a clean and familiar structure.
2. Reduce setup mistakes during practice and on-site examinations.
3. Record the patterns you use repeatedly so you can review them quickly.
4. Build confidence by reusing a known scaffold instead of rewriting everything from scratch.

## Step 1. Standard Header File

Create one standard header block that you use in most practice files.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
```

### Notes for students (Step 1)

- `#include <bits/stdc++.h>` is a GCC shortcut header that includes most standard C++ libraries.
  - Useful for contest/practice speed.
  - Not fully portable to all compilers.
- `using namespace std;` lets you write `cin`, `cout`, and `string` without `std::`.
- `int main()` is the program entry point.
- `ios::sync_with_stdio(false);` speeds up C++ stream I/O.
- `cin.tie(nullptr);` avoids automatic flushing before each input operation, improving speed.
- `return 0;` indicates normal program termination.

### Why this matters

- It gives you a consistent starting point.
- It saves time during simple problems.
- It reminds you to set up fast input and output when needed.

## Step 2. C++ Style Template

Add a template that matches your preferred coding style. Keep the structure simple and repeatable.

```cpp
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
    // read input
    // process data
    // print answer
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
```

### Notes for students (Step 2)

- `using ll = long long;` creates a short alias for 64-bit integers.
- `void solve()` keeps core problem logic separate from setup code.
- `main()` only handles I/O setup and calls `solve()`.
- This structure is easy to reuse across many problems.

### What to put in the template

- Common type aliases such as `ll` or `pii`.
- A `solve()` function for each problem.
- Simple helper functions for repeated logic.
- Comments only where they help you understand the pattern later.

## Step 3. Simple Input Preprocessing

Many UVa and CPE-style problems need a small amount of input setup before the main logic begins. Put that setup into your codebook so you do not have to re-think it each time.

### Common preprocessing cases

- Read input until EOF.
- Read a test count `T` first.
- Skip blank lines before a block of text.
- Mix `cin >>` and `getline` safely.
- Normalize whitespace when the problem is line-based.

### Example pattern

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string line;
    while (T--) {
        getline(cin, line);

        if (line.empty()) {
            continue;
        }

        // process the line
        cout << line << endl;
    }

    return 0;
}
```

### Notes for students (Step 3)

- `cin >> T;` reads a token (number), not a full line.
- `cin.ignore(..., '\n');` removes the leftover newline before `getline`.
- `getline(cin, line);` reads a whole line including spaces.
- `if (line.empty()) continue;` safely skips blank lines.

> Rule: if you use `cin >> ...` and then need `getline`, call `cin.ignore(...)` first.

### What to remember

- Use `cin.ignore(...)` after token input if the next step needs `getline`.
- Keep preprocessing small and predictable.
- Record only the patterns you actually use often.

## Suggested Codebook Sections

If you want to organize your codebook well, use these sections:

1. Basic C++ header and template.
2. Input patterns and preprocessing.
3. String handling helpers.
4. Array, vector, and sorting snippets.
5. Map, set, and counting patterns.
6. Graph and DFS/BFS templates.
7. Number theory and math utilities.

## Final Advice

Do not build the codebook as a pile of copied answers. Build it as a learning tool. Every entry should explain when to use it, what problem pattern it solves, and what the risk is if you use it carelessly.
