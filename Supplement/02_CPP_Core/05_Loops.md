# C++ Core 05 — Loops

## What is iteration?

Iteration means repeating a block of work.

Use loops for:

- counting;
- accumulation;
- repeated input;
- digit processing;
- search;
- simulation.

## `for` loop

Best when you know how many repetitions are needed.

```cpp
for (int i = 0; i < 5; ++i) {
    cout << i << '\n';
}
```

Mental model:

```text
initialize
   |
check condition
   |
do work
   |
update
   |
repeat
```

## `while` loop

Best when the number of repetitions depends on a condition.

```cpp
while (n > 0) {
    cout << n % 10 << '\n';
    n /= 10;
}
```

## Accumulation

Sum 1 through `n`:

```cpp
long long sum = 0;

for (int i = 1; i <= n; ++i) {
    sum += i;
}
```

## Counting

Count odd values:

```cpp
int count = 0;

for (int x : values) {
    if (x % 2 != 0) {
        ++count;
    }
}
```

## Digit sum

```cpp
int sum = 0;

while (n > 0) {
    sum += n % 10;
    n /= 10;
}
```

## Important: loop progress

This loop never changes `n`:

```cpp
while (n > 0) {
    cout << n << '\n';
}
```

If `n > 0`, it becomes an infinite loop.

Always ask:

> What changes so that the loop can eventually stop?

## Self-check

Write three programs:

1. print 1 through `n`;
2. sum 1 through `n`;
3. count the digits of a positive integer.

Then rewrite at least one `for` solution using `while`.
