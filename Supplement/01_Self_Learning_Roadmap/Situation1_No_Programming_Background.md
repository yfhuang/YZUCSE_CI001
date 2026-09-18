# Situation 1 — No Programming Background

## Goal

Your first goal is **not** to memorize C++.

Your first goal is to understand how familiar ideas from mathematics and daily reasoning become instructions that a computer can execute.

## Step 1 — Start from ideas you already know

| Familiar idea | Programming idea | C++ example |
|---|---|---|
| Integer | integer data | `int x = 5;` |
| Large integer | larger integer data | `long long n = 10000000000LL;` |
| Decimal | real-number approximation | `double pi = 3.14;` |
| Letter | character | `char grade = 'A';` |
| Words | string | `string name = "Amy";` |
| Formula | expression | `distance = speed * time;` |
| Piecewise function | decision | `if / else` |
| Repeated calculation | loop | `for / while` |
| List of values | collection | array / `vector` |
| Table | 2D collection | 2D array / vector |
| Key -> value | mapping | `map` |

## Step 2 — Think in Input -> Process -> Output

Almost every beginner problem can be simplified to:

```text
Input
  |
  v
Process
  |
  v
Output
```

Example problem:

> Read two integers and print their sum.

Human reasoning:

```text
Input: a, b
Process: a + b
Output: result
```

C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = a + b;

    cout << result << '\n';
    return 0;
}
```

## Step 3 — Learn one control idea at a time

### Sequence

Statements run from top to bottom.

### Decision

Use a condition when different input values need different actions.

```cpp
if (x > 0) {
    cout << "positive\n";
} else if (x == 0) {
    cout << "zero\n";
} else {
    cout << "negative\n";
}
```

### Iteration

Use a loop when the same type of work must be repeated.

```cpp
for (int i = 1; i <= 5; ++i) {
    cout << i << '\n';
}
```

## Step 4 — Do not fear compiler errors

A compiler error means the program cannot be translated into an executable program.

Typical beginner causes:

- missing `;`
- missing `}`
- misspelled variable name
- wrong quotation marks
- using a variable before declaring it

The correct learning habit is:

```text
Read the first compiler error
-> find the referenced line
-> inspect that line and the line above it
-> fix one issue
-> compile again
```

## Step 5 — Recommended first-week checklist

You are ready for easy UVa-style problems when you can write these from a blank file:

- read one integer;
- read two integers;
- print one calculated value;
- use `if / else`;
- use a `for` loop;
- use a `while` loop;
- understand integer division and remainder;
- compile and run your program locally.

## Suggested W3Schools path

Use the C++ tutorial for:

1. Syntax
2. Output
3. Comments
4. Variables
5. User input
6. Data types
7. Operators
8. Booleans
9. If/Else
10. While loop
11. For loop
12. Arrays

Do the exercises immediately after each topic. Do **not** wait until you finish the entire tutorial.
