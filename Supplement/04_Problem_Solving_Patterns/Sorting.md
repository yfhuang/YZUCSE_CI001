# Pattern — Sort Then Process

## Basic sorting

```cpp
sort(a.begin(), a.end());
```

Descending:

```cpp
sort(a.rbegin(), a.rend());
```

## Why sorting helps

Sorting can turn a difficult problem into a simple scan.

After sorting, you can easily:

- find minimum/maximum;
- compare neighbors;
- detect duplicates;
- compute medians;
- process values in rank order;
- use binary search.

## Example — median-like reasoning

```cpp
sort(a.begin(), a.end());
int middle = a[a.size() / 2];
```

## Custom sorting

For records:

```cpp
struct Student {
    string name;
    int score;
};
```

Comparator:

```cpp
sort(students.begin(), students.end(),
     [](const Student& a, const Student& b) {
         if (a.score != b.score)
             return a.score > b.score;
         return a.name < b.name;
     });
```

## Comparator rule

A comparator should answer:

> Should `a` appear before `b`?

Avoid contradictory comparison logic.

## Common mistakes

- sorting when original order must be preserved;
- using the wrong ascending/descending direction;
- forgetting a tie-break rule;
- modifying data before all required original-order calculations are complete.
