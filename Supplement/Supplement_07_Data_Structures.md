# Supplement 07: Data Structures

## Introduction
This supplement guides students through learning data structures in C++, progressing from basic to advanced concepts.

## Level 1: Fundamental Structures

### Array
**Fixed-size contiguous memory storage**
```cpp
#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    for (int num : arr)
		cout << num << " ";

    return 0;
}
```

### Linked List
**Dynamic memory storage with pointer-based connectivity**
```cpp
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    for (Node* curr = head; curr != nullptr; curr = curr->next)
        cout << curr->data << " ";

    return 0;
}
```

## Level 2: Collection Structures

### Set
**Unordered collection of unique elements**
```cpp
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> s = {1, 2, 3, 2, 4};

    for (int num : s)
		cout << num << " ";
    
	return 0;
}
```

### Stack
**Last-In-First-Out (LIFO) data structure**
```cpp
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
```

### Queue
**First-In-First-Out (FIFO) data structure**
```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
```

## Level 3: Advanced Structures

### Hash Table
**Fast key-value lookup using hashing**
```cpp
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> map;

    map["apple"] = 5;
    map["banana"] = 3;
    
    for (auto& p : map)
        cout << p.first << ": " << p.second << endl;

    return 0;
}
```

### Map
**Ordered key-value pairs**
```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["apple"] = 5;
    m["banana"] = 3;
    m["cherry"] = 7;
    
    for (auto& p : m)
        cout << p.first << ": " << p.second << endl;

    return 0;
}
```

### Tree
**Hierarchical structure with nodes and edges**
```cpp
#include <iostream>

using namespace std;

struct TreeNode {
    int val;

    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorder(TreeNode* root) {
    if (!root) return;
    
	inorder(root->left);
    
	cout << root->val << " ";
    
	inorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    inorder(root);

    return 0;
}
```

### Graph
**Complex network of connected nodes**
```cpp
#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
    int V;
    vector<vector<int>> adj;
    
    Graph(int V) : V(V), adj(V) {}
    
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << i << ": ";
            
			for (int v : adj[i])
				cout << v << " ";
            
			cout << endl;
        }
    }
};

int main() {
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.printGraph();

    return 0;
}
```

## Learning Path
Follow this progression to build a solid understanding of data structures in C++, starting with the fundamental building blocks and advancing to more complex structures used in sophisticated algorithms and applications.
