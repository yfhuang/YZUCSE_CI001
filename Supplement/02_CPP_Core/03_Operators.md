# C++ Core 03 — Operators

## Arithmetic

```cpp
+  -  *  /  %
```

Examples:

```cpp
int a = 17;
int b = 5;

cout << a + b << '\n';  // 22
cout << a - b << '\n';  // 12
cout << a * b << '\n';  // 85
cout << a / b << '\n';  // 3
cout << a % b << '\n';  // 2
```

## Comparison

```cpp
<   <=   >   >=   ==   !=
```

Example:

```cpp
if (a == b) {
    cout << "equal\n";
}
```

Do not confuse:

```cpp
a = b;   // assignment
a == b;  // comparison
```

## Logical operators

```cpp
&&   // AND
||   // OR
!    // NOT
```

Example:

```cpp
if (age >= 18 && age <= 65) {
    cout << "in range\n";
}
```

## Divisibility

```cpp
if (n % 2 == 0) {
    cout << "even\n";
}
```

```cpp
if (n % 3 == 0 && n % 5 == 0) {
    cout << "divisible by both\n";
}
```

## Extracting digits

Last digit:

```cpp
int digit = n % 10;
```

Remove last digit:

```cpp
n /= 10;
```

These two operations form the basis of many Week 3 digit-processing problems.

## Self-check

Without running the code, evaluate:

```cpp
int n = 1234;

cout << n % 10 << '\n';
n /= 10;
cout << n << '\n';
cout << (n % 2 == 0) << '\n';
```
