# Pattern — Counting

## Recognition

A counting problem asks:

> How many items satisfy a condition?

Template:

```cpp
int count = 0;

for (int x : a) {
    if (condition) {
        ++count;
    }
}
```

## Example — count even values

```cpp
int count = 0;

for (int x : a) {
    if (x % 2 == 0) {
        ++count;
    }
}

cout << count << '\n';
```

## Direct formula versus loop

Some counting problems have a mathematical formula.

For example, counting odd values in an interval may be solved using arithmetic rather than checking every number.

Ask:

- Is the range small enough to iterate?
- Is there a direct formula?
- Does the problem expect a general reusable counting pattern or mathematical simplification?

## Typical mistakes

- forgetting to initialize count;
- counting the wrong boundary;
- using `<` instead of `<=`;
- modifying the value while counting;
- not resetting count for each test case.

## Practice transformation

Take a loop that counts even values and modify it to count:

- positive values;
- multiples of 3;
- values inside `[L, R]`;
- characters that are digits.
