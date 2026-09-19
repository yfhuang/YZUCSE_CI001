# Pattern — Searching

## Recognition

A searching problem asks:

> Is a target value present in the data, and if so, where is it?

The easiest way to think about it is:

- look at each item one by one;
- stop when you find the target;
- if you finish without finding it, the answer is “not found”.

## Linear search

Use linear search when the data is small or not sorted.

### Traditional version

```cpp
vector<int> a;
int target = 0;
bool found = false;

for (int i = 0; i < a.size(); ++i) {
    if (a[i] == target) {
        found = true;
        break;
    }
}
```

This means:

- start from the first element;
- compare it with the target;
- if they match, stop immediately;
- otherwise continue to the next element.

### Standard library version

```cpp
auto it = find(a.begin(), a.end(), target);
bool found = (it != a.end());
```

This is just a shorter way to say the same idea: “find whether the target exists in the data”.

## Binary search

Binary search is much faster, but it only works on sorted data.

```cpp
sort(a.begin(), a.end());

bool found = binary_search(a.begin(), a.end(), target);
```

### Why it works

Imagine searching in a sorted list:

- look at the middle;
- if the target is smaller, search only the left half;
- if the target is larger, search only the right half;
- keep cutting the search space in half.

This is much faster than checking every position.

### Find the first position not less than target

```cpp
auto it = lower_bound(a.begin(), a.end(), target);

if (it != a.end()) {
    int index = (int)(it - a.begin());
    cout << index << '\n';
}
```

This tells us the position where the target would first appear in sorted order.

## Decision guide

Use linear search when:

- the data is small;
- the list is not sorted;
- there are only a few queries;
- sorting would change the original order that the problem needs.

Consider binary search when:

- the data is sorted or can be sorted;
- there are many search queries;
- the constraints are large enough that repeated linear search is too slow.

## Common mistake

Binary search is not valid on unsorted data.

If the array is not sorted, the middle element does not give reliable information about where the target may be.

## Intuition

Searching is just a careful scan:

- linear search checks everything;
- binary search skips half the candidates each time because the data is sorted.

That is the whole idea behind the pattern.
