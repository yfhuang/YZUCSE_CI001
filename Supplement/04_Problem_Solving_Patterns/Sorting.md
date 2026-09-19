# Pattern — Sort Then Process

## Recognition

A sorting problem often becomes easier after we arrange values in a good order.

The basic idea is:

- arrange the data from small to large, or large to small;
- then look at the data in a more useful order;
- often this makes the solution much simpler.

## Basic sorting

### Increasing order

```cpp
sort(a.begin(), a.end());
```

This puts the smallest value first and the largest value last.

### Decreasing order

```cpp
sort(a.rbegin(), a.rend());
```

This puts the largest value first.

## Why sorting helps

After sorting, many tasks become easy:

- find the minimum or maximum;
- compare neighboring values;
- detect duplicates;
- compute the median;
- process values by rank;
- use binary search.

Once the data is ordered, the problem often becomes a simple scan.

## Example — median-like reasoning

```cpp
sort(a.begin(), a.end());
int middle = a[a.size() / 2];
```

After sorting, the middle value is often the median candidate for many problems.
This is because the middle element is now in a meaningful position.

## Custom sorting

Sometimes we need to sort records by a custom rule.

```cpp
struct Student {
    string name;
    int score;
};
```

Suppose we want the highest score first, and if two students have the same score, we want the name in alphabetical order.

```cpp
sort(students.begin(), students.end(),
     [](const Student& a, const Student& b) {
         if (a.score != b.score) {
             return a.score > b.score;
         }
         return a.name < b.name;
     });
```

This comparator answers:

> Should student `a` come before student `b`?

## Comparator rule

A comparator must be consistent and clear.
It should not give contradictory answers.

If two students have the same score, we need a tie-break rule such as name order.

## Common mistakes

- sorting when the original order must be preserved;
- using the wrong direction, such as ascending when descending is needed;
- forgetting a tie-break rule;
- changing the data before all required original-order calculations are done.

## Intuition

Sorting is like arranging books on a shelf in a neat order before you look for the answer.
Once the data is organized, many problems become much easier to reason about.

This is why “sort then process” is such a powerful pattern in competitive programming.
