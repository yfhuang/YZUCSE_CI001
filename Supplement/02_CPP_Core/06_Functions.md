# C++ Core 06 — Functions

## Why functions?

A function gives a name to a reusable piece of logic.

Instead of thinking:

```text
one huge main()
```

think:

```text
input
  |
  v
small functions
  |
  v
output
```

## Basic function

```cpp
int square(int x) {
    return x * x;
}
```

Use:

```cpp
cout << square(5) << '\n';
```

## Predicate function

A function that answers true/false:

```cpp
bool isEven(int x) {
    return x % 2 == 0;
}
```

Use:

```cpp
if (isEven(n)) {
    cout << "even\n";
}
```

## Greatest common divisor example

```cpp
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
```

## Pass by value

```cpp
void change(int x) {
    x = 100;
}
```

This changes only the local copy.

## Pass by reference

```cpp
void change(int& x) {
    x = 100;
}
```

This can modify the original variable.

## Read-only container parameter

```cpp
int sum(const vector<int>& a) {
    int total = 0;
    for (int x : a) total += x;
    return total;
}
```

The `const &` form avoids copying a large vector and promises not to modify it.

## Contest habit

Use functions when they make a repeated or logically separate operation clearer:

- digit sum;
- primality test;
- GCD;
- reverse number;
- process one test case;
- custom comparison logic.

Do not split a five-line beginner program into many tiny functions without a reason.
