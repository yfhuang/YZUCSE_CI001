# Supplement 08: Learning STL

## Overview

This supplement guides students to develop a clear understanding of the Standard Template Library (STL), including its core components: **containers** and **algorithms**.

## Table of Contents

1. [STL Containers](#stl-containers)
2. [STL Algorithms](#stl-algorithms)
3. [Iterators](#iterators)
4. [Best Practices](#best-practices)

## STL Containers

### Sequence Containers
- **vector**: Dynamic array with random access
- **deque**: Double-ended queue
- **list**: Doubly-linked list

#### Example: Vector
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vec.push_back(6);

    for (int val : vec)
        cout << val << " ";

    cout << endl;
    return 0;
}
```

#### Example: Deque
```cpp
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq = {1, 2, 3};

    dq.push_front(0);
    dq.push_back(4);

    for (int val : dq)
        cout << val << " ";

    return 0;
}
```

#### Example: List
```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> lst = {1, 2, 3, 4, 5};

    lst.push_back(6);
    lst.pop_front();

    for (int val : lst)
        cout << val << " ";

    cout << endl;

    return 0;
}
```

### Associative Containers
- **set**: Unique sorted elements
- **multiset**: Multiple sorted elements
- **map**: Key-value pairs with unique keys
- **multimap**: Key-value pairs allowing duplicate keys

#### Example: Set
```cpp
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s = {3, 1, 4, 1, 5};

    s.insert(2);

    for (int val : s)
        cout << val << " ";

    cout << endl;

    return 0;
}
```

#### Example: Multiset
```cpp
#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> ms = {3, 1, 4, 1, 5};

    ms.insert(1);

    for (int val : ms)
        cout << val << " ";

    cout << endl;
    return 0;
}
```

#### Example: Map
```cpp
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> mp;

    mp["apple"] = 5;
    mp["banana"] = 3;

    for (auto& pair : mp)
        cout << pair.first << ": " << pair.second << endl;

    return 0;
}
```

#### Example: Multimap
```cpp
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<string, int> mmp;

    mmp.insert({"apple", 5});
    mmp.insert({"apple", 3});
    mmp.insert({"banana", 2});

    for (auto& pair : mmp)
        cout << pair.first << ": " << pair.second << endl;

    return 0;
}
```


### Unordered Associative Containers
- **unordered_set**: Hash-based unique elements
- **unordered_map**: Hash-based key-value pairs

#### Example: Unordered Set
```cpp
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> uset = {3, 1, 4, 1, 5};

    uset.insert(2);

    for (int val : uset)
        cout << val << " ";

    return 0;
}
```

#### Example: Unordered Map
```cpp
#include <unordered_map>
#include <iostream>

using namespace std;

int main() {
    unordered_map<int, string> umap;

    umap[1] = "one";
    umap[2] = "two";

    if (umap.find(1) != umap.end())
        cout << umap[1] << endl;

    return 0;
}
```

## STL Algorithms

STL provides numerous algorithms that work with containers through iterators:
- **Searching**: find, binary_search, find_if
- **Sorting**: sort, stable_sort, partial_sort
- **Modifying**: copy, transform, remove, reverse
- **Numeric**: accumulate, adjacent_difference

#### Example: Searching with find
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    auto it = find(vec.begin(), vec.end(), 3);

    if (it != vec.end())
        cout << "Found: " << *it << endl;

    return 0;
}
```

#### Example: Sorting
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {5, 2, 8, 1, 9};

    sort(vec.begin(), vec.end());

    for (int val : vec)
        cout << val << " ";

    return 0;
}
```

#### Example: Transforming with transform
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int> result(vec.size());

    transform(vec.begin(), vec.end(), result.begin(), 
              [](int x) { return x * 2; });
    
    for (int val : result)
        cout << val << " ";

    return 0;
}
```

#### Example: Accumulate
```cpp
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    int sum = accumulate(vec.begin(), vec.end(), 0);

    cout << "Sum: " << sum << endl;

    return 0;
}
```

#### Example: find_if
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    auto it = find_if(vec.begin(), vec.end(), 
                      [](int x) { return x > 3; });

    if (it != vec.end())
        cout << "Found: " << *it << endl;

    return 0;
}
```

#### Example: copy
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> src = {1, 2, 3, 4, 5};

    vector<int> dst(src.size());

    copy(src.begin(), src.end(), dst.begin());

    for (int val : dst)
        cout << val << " ";

    return 0;
}
```

## Iterators

Iterators are abstractions that allow algorithms to work with different container types. They connect containers and algorithms.

### Iterator Categories
- Input iterators
- Output iterators
- Forward iterators
- Bidirectional iterators
- Random access iterators

#### Example: Vector Iterator (Random Access)
```cpp
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";

    return 0;
}
```

#### Example: List Iterator (Bidirectional)
```cpp
#include <list>
#include <iostream>

using namespace std;

int main() {
    list<int> lst = {1, 2, 3, 4, 5};

    for (auto it = lst.begin(); it != lst.end(); ++it)
        cout << *it << " ";

    return 0;
}
```

#### Example: Map Iterator
```cpp
#include <map>
#include <iostream>

using namespace std;

int main() {
    map<string, int> mp = {{"a", 1}, {"b", 2}, {"c", 3}};

    for (auto it = mp.begin(); it != mp.end(); ++it)
        cout << it->first << ": " << it->second << endl;

    return 0;
}
```

#### Example: Reverse Iterator
```cpp
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    for (auto it = vec.rbegin(); it != vec.rend(); ++it)
        cout << *it << " ";

    return 0;
}
```

#### Example: Using std::advance and std::distance
```cpp
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    auto it = vec.begin();

    advance(it, 2);  // Move iterator 2 positions forward
    
    cout << *it << endl;  // Prints 3

    int dist = distance(vec.begin(), it);

    cout << "Distance: " << dist << endl;  // Prints 2
    
    return 0;
}
```

## Best Practices

- Choose the appropriate container for your use case
- Use algorithms instead of manual loops when possible
- Understand iterator invalidation rules
- Prefer STL algorithms over raw pointers
