# Pattern — Frequency Counting

## Recognition

A frequency counting problem asks questions like:

- how many times does each value appear?
- which character appears most often?
- are two collections equivalent?
- is there a duplicate?
- how many values appear in both collections?

The main idea is:

- keep a counter for each value;
- when you see a value, increase its counter by 1;
- at the end, the counter tells you its frequency.

## Small fixed domain

If the values are limited to a small known range, use an array.

For lowercase English letters, there are only 26 possible characters.

```cpp
#include <array>

array<int, 26> freq = {};

for (int i = 0; i < s.length(); ++i) {
    char c = s[i];
    ++freq[c - 'a'];
}
```

This works because:

- `freq[0]` stores how many `'a'` characters appear;
- `freq[1]` stores how many `'b'` characters appear;
- and so on.

## General integer keys

If the values are not limited to a small range, use a map.

```cpp
map<int, int> freq;

for (int i = 0; i < a.size(); ++i) {
    int x = a[i];
    ++freq[x];
}
```

Now `freq[x]` means:

- “how many times does `x` appear?”

If `x` appears 3 times, then `freq[x] == 3`.

## Unordered version

```cpp
unordered_map<int, int> freq;
```

Use an ordered `map` when you want the keys to be printed in sorted order.
Use an unordered structure when speed matters and order is not important.

## Duplicate detection

Sometimes the problem only asks whether a value appears more than once.

```cpp
set<int> seen;

for (int i = 0; i < a.size(); ++i) {
    int x = a[i];

    if (seen.count(x) > 0) {
        cout << "duplicate\n";
    }

    seen.insert(x);
}
```

This means:

- if a value has already been seen, it is a duplicate;
- otherwise, we add it to the set and keep going.

## Choosing the structure

- small known domain -> `array`
- sorted key output -> `map`
- membership only -> `set`
- fast average lookup, no order requirement -> unordered container

## Intuition

Frequency counting is like making a checklist for every value:

- create a box for each value;
- every time you see that value, add one mark into its box;
- after checking everything, each box tells you how many times that value appeared.

This pattern is extremely useful for word counts, number statistics, duplicate checks, and comparing collections.
