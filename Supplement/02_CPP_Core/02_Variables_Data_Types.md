# C++ Core 02 — Variables and Data Types

## Why types matter

A variable is a named storage location.

A C++ variable has a type that determines:

- what kind of value it stores;
- approximately how much memory it uses;
- what operations are valid;
- what range/precision is available.

## Core contest types

```cpp
int count = 10;
long long population = 8000000000LL;
double average = 85.5;
char grade = 'A';
bool passed = true;
string name = "Amy";
```

For `string`, include:

```cpp
#include <string>
```

## `int` versus `long long`

A common mistake is overflow during multiplication.

```cpp
int a = 100000;
int b = 100000;
cout << a * b << '\n';  // may overflow int
```

Safer:

```cpp
long long a = 100000;
long long b = 100000;
cout << a * b << '\n';
```

Or force the multiplication to happen as `long long`:

```cpp
cout << 1LL * a * b << '\n';
```

## Integer and floating-point operations

```cpp
cout << 5 / 2 << '\n';          // 2
cout << 5.0 / 2 << '\n';        // 2.5
cout << 5 % 2 << '\n';          // 1
```

The remainder operator `%` is central to:

- even/odd checks;
- digit extraction;
- divisibility tests;
- cyclic positions.

## Character versus string

```cpp
char c = 'A';
string s = "ABC";
```

Do not use:

```cpp
char c = "A";   // wrong
```

## Self-check

Predict the output before running:

```cpp
int a = 7;
int b = 3;

cout << a / b << '\n';
cout << a % b << '\n';
cout << static_cast<double>(a) / b << '\n';
```

Then test it.

## Rule of thumb for beginners

Use:

- `int` for ordinary small integer values;
- `long long` when values/products may be large;
- `double` for decimal calculations;
- `char` for one character;
- `string` for text;
- `bool` for true/false state.
