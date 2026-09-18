# Pattern — Digit Processing

## Core operations

For a positive integer `n`:

```cpp
int last = n % 10;
n /= 10;
```

Repeat until `n == 0`.

## Digit sum

```cpp
int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
```

## Reverse a number

```cpp
long long reverseNumber(long long n) {
    long long result = 0;

    while (n > 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }

    return result;
}
```

## Count digits

```cpp
int digits = 0;

do {
    ++digits;
    n /= 10;
} while (n > 0);
```

The `do/while` handles `n == 0` as one digit.

## Digital reduction pattern

Some problems repeatedly replace a number with its digit sum.

```cpp
while (n >= 10) {
    n = digitSum(n);
}
```

## Recognition clue

If the problem describes individual decimal digits, first ask whether `% 10` and `/ 10` are sufficient before converting the number to a string.
