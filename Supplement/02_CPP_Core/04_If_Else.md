# C++ Core 04 — If / Else

## Idea: classification

Many problems ask you to place an input into a category.

Mathematically:

```text
x > 0  -> positive
x = 0  -> zero
x < 0  -> negative
```

C++:

```cpp
if (x > 0) {
    cout << "positive\n";
} else if (x == 0) {
    cout << "zero\n";
} else {
    cout << "negative\n";
}
```

## Example — relational result

```cpp
if (a < b) {
    cout << "<\n";
} else if (a > b) {
    cout << ">\n";
} else {
    cout << "=\n";
}
```

This is the fundamental pattern behind relational-operator exercises.

## Compound conditions

Triangle-like condition:

```cpp
if (a + b > c && a + c > b && b + c > a) {
    cout << "valid\n";
}
```

Range check:

```cpp
if (x >= 1 && x <= 100) {
    cout << "inside\n";
}
```

## Nested versus combined conditions

Nested:

```cpp
if (x > 0) {
    if (x % 2 == 0) {
        cout << "positive even\n";
    }
}
```

Combined:

```cpp
if (x > 0 && x % 2 == 0) {
    cout << "positive even\n";
}
```

Use whichever is clearer.

## Self-check

Write a program that reads an integer and prints:

- `positive even`
- `positive odd`
- `zero`
- `negative even`
- `negative odd`

Test at least:

```text
4
3
0
-4
-3
```

## Common mistakes

- using `=` instead of `==`;
- missing a boundary such as `<=`;
- placing conditions in the wrong order;
- forgetting that negative integers also have parity.
