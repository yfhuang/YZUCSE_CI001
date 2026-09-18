# Situation 2 — From Entry-Level Python to C++

## Goal

You already know several programming ideas. Reuse them.

The main task is to learn how C++ expresses those ideas differently and where C++ behavior differs from Python.

## Python -> C++ map

| Python | C++ |
|---|---|
| `print(x)` | `cout << x << '\n';` |
| `x = int(input())` | `int x; cin >> x;` |
| `if x > 0:` | `if (x > 0) { ... }` |
| `elif` | `else if` |
| `for i in range(n):` | `for (int i = 0; i < n; ++i)` |
| `while x > 0:` | `while (x > 0)` |
| `list` | usually `vector` |
| `dict` | `map` / `unordered_map` |
| `set` | `set` / `unordered_set` |
| `len(s)` | `s.size()` |
| `a.sort()` | `sort(a.begin(), a.end())` |
| `x in s` | `s.count(x)` for set/map, or search |
| function | typed function |

## Difference 1 — Types are explicit

Python:

```python
x = 10
```

C++:

```cpp
int x = 10;
```

Choose the type before using the value.

For competitive programming, learn these first:

```cpp
int
long long
double
char
bool
string
```

## Difference 2 — Integer division

Python:

```python
5 / 2   # 2.5
5 // 2  # 2
```

C++:

```cpp
int a = 5;
int b = 2;

cout << a / b << '\n';  // 2
```

To obtain 2.5:

```cpp
cout << static_cast<double>(a) / b << '\n';
```

## Difference 3 — Integer overflow matters

Python integers expand as needed.

C++ integer types have finite ranges.

A common contest habit is:

```cpp
long long value;
```

when values or products may exceed the `int` range.

## Difference 4 — C++ is compiled

Typical workflow:

```text
source code (.cpp)
    |
    v
compiler
    |
    v
executable
    |
    v
program output
```

With g++:

```bash
g++ -std=c++15 -Wall -Wextra -O2 main.cpp -o main
./main
```

## Difference 5 — Strings and characters are different

```cpp
char c = 'A';
string s = "A";
```

Single quotes are for a character.

Double quotes are for a string.

## Difference 6 — Containers are typed

```cpp
vector<int> values;
vector<string> names;
```

Do not think of `vector` as a Python list that can freely mix types.

## Difference 7 — References matter

A normal function parameter is copied:

```cpp
void addOne(int x) {
    x++;
}
```

To modify the original variable:

```cpp
void addOne(int& x) {
    x++;
}
```

For large containers, use a const reference when only reading:

```cpp
int total(const vector<int>& a) {
    int sum = 0;
    for (int x : a) sum += x;
    return sum;
}
```

## Common "Python in C++" mistakes

- forgetting `;`
- forgetting braces
- expecting `/` to produce a decimal for integers
- expecting Python-style arbitrary-size integers
- confusing `char` and `string`
- using `.append()` instead of `push_back()`
- expecting negative indexing such as `a[-1]`
- accessing beyond vector/string bounds
- assuming every iterable behavior maps directly to C++

## Transition target

You should merge into the common course track once you can:

- read input with `cin`;
- write conditions and loops;
- write a function;
- use `vector<int>`;
- use `string`;
- sort a vector;
- understand `map` and `set` at a basic level;
- compile and debug a short C++ program.

Do not spend several weeks repeating concepts you already understand. Use the saved time for UVa/CPE problem recognition.
