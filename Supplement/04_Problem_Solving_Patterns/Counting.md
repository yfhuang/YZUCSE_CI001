# Pattern — Counting

## Recognition

A counting problem asks:

> How many items satisfy a condition?

The basic idea is simple:

- start at zero;
- look at each item one by one;
- if the item matches the condition, increase the counter by 1.

## Traditional template

```cpp
vector<int> a;
int n = (int)a.size();
int count = 0;

for (int i = 0; i < n; ++i) {
    if (condition) {
        ++count;
    }
}
```

Here, `count` plays the role of a bucket that stores how many times the condition is true.

## Example — count even values

```cpp
vector<int> a;
int n = (int)a.size();
int count = 0;

for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0) {
        ++count;
    }
}

cout << count << '\n';
```

This means:

- if a value is divisible by 2, it is even;
- then we add 1 to the counter;
- finally, we print the total number of even values.

## Intuition

If you were doing this manually, you would:

1. set a counter to 0;
2. check each number;
3. if it matches, mark one more;
4. continue until all numbers are checked.

This is exactly what the loop is doing.

## Direct formula versus loop

Some counting problems can be solved with a formula instead of checking every item.

For example, counting odd values in an interval can sometimes be done with arithmetic instead of looping through every number.

Ask:

- Is the range small enough to iterate?
- Is there a direct formula?
- Does the problem expect a general reusable counting pattern or a mathematical shortcut?

## Typical mistakes

- forgetting to initialize `count` to 0;
- counting the wrong boundary, such as using `<` when it should be `<=`;
- changing the value while counting;
- not resetting `count` for each test case;
- counting values that do not actually satisfy the condition.

## Practice transformation

Take the even-count example and modify it to count:

- positive values;
- multiples of 3;
- values inside `[L, R]`;
- characters that are digits.

This is a good way to train your brain to recognize the counting pattern in new problems.
