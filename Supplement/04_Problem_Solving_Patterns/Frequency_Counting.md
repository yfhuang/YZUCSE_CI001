# Pattern — Frequency Counting

## Recognition

Questions often ask:

- how many times does each value occur?
- which character is most common?
- are two collections equivalent?
- is there a duplicate?
- how many values appear in both collections?

## Small fixed domain

For lowercase English letters:

```cpp
array<int, 26> freq{};

for (char c : s) {
    ++freq[c - 'a'];
}
```

Include:

```cpp
#include <array>
```

## General integer keys

```cpp
map<int, int> freq;

for (int x : a) {
    ++freq[x];
}
```

## Unordered version

```cpp
unordered_map<int, int> freq;
```

Use ordered `map` when output must be in sorted key order.

## Duplicate detection

```cpp
set<int> seen;

for (int x : a) {
    if (seen.count(x)) {
        cout << "duplicate\n";
    }
    seen.insert(x);
}
```

## Choosing the structure

- small known domain -> array
- sorted key output -> `map`
- membership only -> `set`
- average fast lookup and no ordering requirement -> unordered container
