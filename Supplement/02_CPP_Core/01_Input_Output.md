# C++ Core 01 — Input and Output

## Learning outcomes

You should be able to:

- recognize the basic structure of a C++ program;
- read values using `cin`;
- print values using `cout`;
- use newline correctly;
- implement a simple Input -> Process -> Output solution.

## Minimal program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++!\n";
    return 0;
}
```

For now, treat the outer structure as a program frame.

Focus on what happens inside `main()`.

## Output

```cpp
cout << 10 << '\n';
cout << "answer = " << 10 << '\n';
```

For online judges, print **only** the required output.

Bad:

```cpp
cout << "Please input a number: ";
```

unless the problem explicitly asks for that text.

## Input

```cpp
int x;
cin >> x;
```

Two values:

```cpp
int a, b;
cin >> a >> b;
```

## Example — Add two integers

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a + b << '\n';
    return 0;
}
```

## Example — Formula

```cpp
long long speed, time;
cin >> speed >> time;

long long distance = speed * time;
cout << distance << '\n';
```

## Self-check

Write a program from a blank file that:

1. reads two integers `a` and `b`;
2. prints their sum;
3. prints their product on the next line.

Then change the program to use `long long`.

## Common judge mistakes

- extra explanatory text;
- missing newline when the required format is strict;
- reading too few values;
- using `int` when multiplication can overflow;
- assuming each value is on a separate line—`cin >>` normally treats spaces and newlines as whitespace.
