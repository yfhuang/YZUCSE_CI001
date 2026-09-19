# Pattern — Accumulation

## Recognition

An accumulation problem combines many values into one result.

The usual idea is:

- start from zero;
- visit each value one by one;
- add it into a running total.

Common accumulators:

- sum;
- product;
- XOR;
- total cost;
- total distance.

## Traditional template

This is the most common beginner-friendly form.

```cpp
vector<int> a;
int n = (int)a.size();
long long total = 0;

for (int i = 0; i < n; ++i) {
    total = total + a[i];
}
```

Think of `total` as a container that keeps collecting results.
At the beginning, it is `0`. Then every element is added into it.

## Why `long long` is often safer

Even if each number fits in `int`, the final sum may become larger than `int` can hold.

```cpp
long long total = 0;
```

This is a common contest habit because it reduces the chance of overflow.

## Conditional accumulation

Sometimes we only add values that meet a condition.

```cpp
vector<int> a;
int n = (int)a.size();
long long total = 0;

for (int i = 0; i < n; ++i) {
    if (a[i] > 0) {
        total = total + a[i];
    }
}
```

This means: only positive numbers are included in the sum.

## Accumulation with transformation

Sometimes we do something to each value before adding it.

```cpp
vector<int> a;
int n = (int)a.size();
long long total = 0;

for (int i = 0; i < n; ++i) {
    long long square = 1LL * a[i] * a[i];
    total = total + square;
}
```

Here, we first compute the square of each number, then add it to the total.
The `1LL` is used to make sure the multiplication is done in `long long`.

## Typical mistakes

- starting from the wrong initial value;
- using `int` for a large sum;
- forgetting to reset the total between test cases;
- accumulating an already accumulated result;
- adding the value once too many times or too few times.

## A simple intuition

Accumulation is like carrying a running total in your hand:

- start with `0`;
- read one value;
- update the total;
- repeat until all values are done.

This pattern appears in many problems such as sum, average, total cost, and total distance.
