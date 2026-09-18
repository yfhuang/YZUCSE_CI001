# Pattern — Greedy and Light Recurrence

This course introduces these ideas lightly before the Lab II bridge.

## Greedy idea

A greedy algorithm repeatedly makes a locally useful choice.

Example pattern:

1. sort;
2. consider items in a useful order;
3. take an item when it satisfies the current requirement.

Do not assume a greedy strategy is correct just because it feels natural.

Ask:

> Can an early choice block a better later solution?

For course-level problems, the intended greedy structure is usually discoverable from the problem constraints and examples.

## Recurrence idea

A recurrence defines a value from earlier values.

Fibonacci:

```text
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2)
```

Iterative implementation:

```cpp
long long fibonacci(int n) {
    if (n == 0) return 0;

    long long a = 0;
    long long b = 1;

    for (int i = 1; i < n; ++i) {
        long long next = a + b;
        a = b;
        b = next;
    }

    return b;
}
```

## Why iterative first?

A direct recursive Fibonacci function repeats large amounts of work.

The iterative version introduces the central DP idea:

> Keep results that are needed later instead of recomputing them.

This prepares you for Lab II without requiring full dynamic programming yet.
