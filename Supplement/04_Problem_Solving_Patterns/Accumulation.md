# Pattern — Accumulation

## Recognition

An accumulation problem combines many values into one result.

Common accumulators:

- sum;
- product;
- XOR;
- total cost;
- total distance.

Template:

```cpp
long long total = 0;

for (int x : a) {
    total += x;
}
```

## Why `long long` is often safer

Even if each input fits in `int`, the sum may not.

```cpp
long long total = 0;
```

is a common contest habit.

## Conditional accumulation

```cpp
long long total = 0;

for (int x : a) {
    if (x > 0) {
        total += x;
    }
}
```

## Accumulation with transformation

```cpp
long long total = 0;

for (int x : a) {
    total += 1LL * x * x;
}
```

## Typical mistakes

- starting from the wrong initial value;
- using `int` for a large sum;
- forgetting to reset between test cases;
- accidentally accumulating an already accumulated result.
