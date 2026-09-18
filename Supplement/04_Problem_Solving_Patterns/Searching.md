# Pattern — Searching

## Linear search

For small or unsorted data:

```cpp
bool found = false;

for (int x : a) {
    if (x == target) {
        found = true;
        break;
    }
}
```

Or:

```cpp
auto it = find(a.begin(), a.end(), target);
bool found = (it != a.end());
```

## Binary search

Binary search requires sorted data.

```cpp
sort(a.begin(), a.end());

bool found = binary_search(a.begin(), a.end(), target);
```

Find first position not less than target:

```cpp
auto it = lower_bound(a.begin(), a.end(), target);

if (it != a.end()) {
    int index = static_cast<int>(it - a.begin());
}
```

## Decision guide

Use linear search when:

- data is small;
- there are few queries;
- sorting would destroy required order.

Consider binary search when:

- data is sorted or can be sorted;
- there are many search queries;
- constraints make repeated linear search expensive.

## Common mistake

Binary search on unsorted data is not valid.
