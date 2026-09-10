# Transition Learning: From High School Knowledge to C++ Programming

## 1. Why Transition Learning?

Learning programming does not mean starting from zero.

Before entering university, students have already learned many important concepts from:

- Mathematics
- English and other languages
- Logic
- Science
- Problem solving

Many of these concepts can be directly connected to programming.

In this course, we call this approach **Transition Learning**:

> **Use what you already know to understand what you are going to learn.**

The goal is to build a bridge:

```text
High-School Knowledge
        ↓
Mathematical / Logical Concept
        ↓
Computer Representation
        ↓
C++ Programming
        ↓
Problem Solving
```

Programming is therefore not only about learning syntax.

The more important question is:

> **How can we represent what we already understand so that a computer can process it?**

---

# 2. From Numbers to Data Types

Students have already learned different kinds of numbers in mathematics.

For example:

```text
Positive integers
1, 2, 3, 4, ...

        ↓

Zero
0

        ↓

Integers
..., -3, -2, -1, 0, 1, 2, 3, ...

        ↓

Decimal / Real Numbers
3.14, -2.5, 0.01, ...
```

C++ also needs different ways to represent these values.

| Mathematics | Examples | C++ Representation |
|---|---|---|
| Positive / non-negative integers | `0, 1, 2, ...` | `unsigned int` |
| Integers | `-10, 0, 25` | `int` |
| Large integers | `10000000000` | `long long` |
| Decimal numbers | `3.14`, `-0.25` | `float`, `double` |
| True / False | True, False | `bool` |

Example:

```cpp
int temperature = -5;
unsigned int numberOfStudents = 50;
double height = 175.5;
bool passed = true;
```

The mathematical concepts are already familiar.

The new learning is how a computer **represents** them.

---

# 3. The A4 Paper Analogy: Computer Memory Is Limited

In mathematics, we can imagine integers continuing forever:

```text
..., -3, -2, -1, 0, 1, 2, 3, ...
```

However, a computer has limited storage space.

Imagine an A4 sheet containing only eight boxes:

```text
[ ][ ][ ][ ][ ][ ][ ][ ]
```

Each box can contain only:

```text
0 or 1
```

Therefore, eight boxes can produce:

$$
2^8 = 256
$$

different patterns.

For example:

```text
00000000
00000001
00000010
...
11111111
```

This introduces an important idea:

> **A computer cannot store an unlimited amount of information in a fixed memory space.**

---

# 4. Unsigned Integers

Suppose all eight bits are used to represent non-negative numbers.

```text
00000000 → 0
00000001 → 1
00000010 → 2
...
11111111 → 255
```

The range is:

$$
0 \sim 2^8-1
$$

or:

$$
0 \sim 255
$$

This is similar to an **unsigned integer**.

Conceptually:

```cpp
unsigned int numberOfStudents = 40;
```

The number of students normally should not be negative.

---

# 5. Signed Integers

But what if we need to represent temperature?

- 10°C
- 0°C
- -5°C

Now negative values are meaningful.

We therefore need a signed representation.

For an 8-bit signed integer:

```text
10000000 → -128
...
11111111 → -1
00000000 → 0
00000001 → 1
...
01111111 → 127
```

The range is from -128 to 127.

In general, for an `n`-bit signed integer, the range is from $-2^{n-1}$ to $2^{n-1}-1$.

In C++:

```cpp
int temperature = -5;
```

This demonstrates an important programming idea:

> Choosing a data type means deciding how the computer should interpret a region of memory.

---

# 6. Range: The Paper Has Limited Space

Consider writing numbers inside a fixed-size box.

If the paper provides space for only three decimal digits:

```text
[ ][ ][ ]
```

we may write:

```text
000
001
...
999
```

but we cannot directly write:

```text
1000
```

because it requires another digit.

Computer data types have the same problem.

```text
Fixed number of bits
        ↓
Fixed number of patterns
        ↓
Limited range of values
```

Therefore:

```text
Data Type
   ↓
Memory Size
   ↓
Possible Bit Patterns
   ↓
Value Range
```

This explains why C++ provides multiple integer types.

```cpp
short
int
long
long long
```

---

# 7. From Integers to Floating-Point Numbers

Students also know decimal numbers:

$$
3.14
$$

$$
-0.5
$$

$$
123.456
$$

In C++:

```cpp
double pi = 3.1415926;
double temperature = -5.5;
```

But there is an important difference between mathematics and computers.

In mathematics:

$$
\frac{1}{3}=0.333333333333\ldots
$$

The digits continue indefinitely.

A computer has limited memory.

Therefore, it must eventually store an approximation.

Conceptually:

```text
Mathematics

1 / 3
↓
0.333333333333333333333333...

Computer

Limited memory
↓
0.333333...
↓
Approximation
```

This introduces the concept of **floating-point precision**.

---

# 8. Integer Division vs. Floating-Point Division

Students already know:

$$
\frac{5}{2}=2.5
$$

But consider C++:

```cpp
int a = 5 / 2;
```

The result is:

```text
2
```

because both operands are integers.

Compare:

```cpp
double b = 5.0 / 2.0;
```

The result is:

```text
2.5
```

Therefore:

```text
Mathematical Formula
        ↓
Data Representation
        ↓
Programming Operation
        ↓
Result
```

The formula alone is not enough.

Students must also understand **how the data are represented**.

---

# 9. Signed and Unsigned Are Mainly Integer Concepts

A common misconception is to think that all C++ numeric types have signed and unsigned versions.

For integers, we can write:

```cpp
int x = -10;
unsigned int y = 10;
```

However, standard C++ does not normally provide:

```cpp
unsigned float
unsigned double
```

Floating-point values such as `float` and `double` can already represent both positive and negative values.

For example:

```cpp
double x = 3.14;
double y = -3.14;
```

---

# 10. From Mathematics Variables to Programming Variables

Students already use variables in mathematics.

For example:

$$
x=10
$$

$$
y=20
$$

$$
z=x+y
$$

The corresponding C++ program is:

```cpp
int x = 10;
int y = 20;
int z = x + y;
```

The idea of a variable is therefore not completely new.

The transition is:

```text
Mathematics
x = 10

        ↓

Programming
int x = 10;
```

However, programming requires additional information:

```text
What kind of value is x?
        ↓
int
```

---

# 11. From Mathematical Formulas to Programming Expressions

Students already understand:

$$
c=a+b
$$

C++:

```cpp
c = a + b;
```

Another example:

$$
v=\frac{d}{t}
$$

C++:

```cpp
double v = d / t;
```

Temperature conversion:

$$
C=\frac{5}{9}(F-32)
$$

C++:

```cpp
double celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
```

Therefore:

```text
Mathematical Formula
        ↓
Programming Expression
```

Programming can be considered a precise way of expressing a calculation to a computer.

---

# 12. From Characters to `char`

Not everything we process is a number.

Students have learned letters and symbols:

```text
A
B
C
a
b
c
!
?
```

C++ can represent an individual character using `char`.

```cpp
char grade = 'A';
```

Notice the single quotation marks:

```cpp
'A'
```

A character is different from an integer even though the computer ultimately represents both using binary data.

---

# 13. From Words and Sentences to `string`

A word is composed of multiple characters.

```text
H e l l o
```

Similarly:

```text
character
    ↓
sequence of characters
    ↓
word / sentence
```

In C++:

```cpp
std::string word = "Hello";
```

or:

```cpp
std::string sentence = "Hello, world!";
```

Therefore:

```text
Language                     C++

A                            char
Hello                        string
Hello, world!                string
```

---

# 14. `'A'`, `"A"`, and `65` Are Different

Consider:

```cpp
char c = 'A';
std::string s = "A";
int n = 65;
```

To a human, they may appear closely related.

But they represent different concepts:

| Representation | Meaning |
|---|---|
| `'A'` | A character |
| `"A"` | A string containing one character |
| `65` | An integer |

This teaches an important programming principle:

> **A value and its representation are not necessarily the same thing.**

---

# 15. From True/False to `bool`

Students already encounter logical statements.

For example:

$$
10 > 5
$$

This statement is:

```text
True
```

C++ provides:

```cpp
bool result = 10 > 5;
```

Therefore:

```text
Logic
True / False

    ↓

Programming
true / false

    ↓

C++
bool
```

This concept will later become the foundation of:

```cpp
if
else
while
for
```

---

# 16. From Inequalities to Conditions

Students have learned inequalities:

$$
x > 10
$$

$$
x \le 100
$$

C++ uses almost the same notation:

```cpp
x > 10
x <= 100
```

This can then transition naturally to:

```cpp
if (x > 10) {
    std::cout << "Large";
}
```

Transition:

```text
Inequality
    ↓
True / False
    ↓
Condition
    ↓
Decision
```

---

# 17. From Piecewise Functions to `if-else`

Students may already know piecewise functions.

For example: if $x \geq 0$, then $f(x)=x$; otherwise, $f(x)=-x$.

This is the absolute value function.

C++:

```cpp
int result;

if (x >= 0) {
    result = x;
} else {
    result = -x;
}
```

Therefore:

```text
Piecewise Function
        ↓
Condition
        ↓
if / else
```

---

# 18. From Sequences to Arrays

Students have already seen mathematical sequences:

$$
a_1,a_2,a_3,\ldots,a_n
$$

For example:

$$
10,20,30,40,50
$$

Instead of declaring:

```cpp
int a1 = 10;
int a2 = 20;
int a3 = 30;
int a4 = 40;
int a5 = 50;
```

we can organize them together:

```cpp
int a[5] = {10, 20, 30, 40, 50};
```

or:

```cpp
std::vector<int> a = {10, 20, 30, 40, 50};
```

Transition:

```text
Mathematical Sequence
        ↓
Collection of Values
        ↓
Array / Vector
```

---

# 19. From Repeated Calculation to Loops

Consider:

$$
1+2+3+4+5
$$

Students already know this as repeated addition.

A direct program could be:

```cpp
int sum = 1 + 2 + 3 + 4 + 5;
```

But what about:

$$
1+2+\cdots+1000?
$$

We can describe the repeated process:

```cpp
int sum = 0;

for (int i = 1; i <= 1000; ++i) {
    sum += i;
}
```

Transition:

```text
Repeated Mathematical Operation
            ↓
Repeated Instructions
            ↓
Loop
```

---

# 20. From Mathematical Functions to C++ Functions

Students already understand:

$$
f(x)=x^2
$$

We can express the same idea in C++:

```cpp
int square(int x) {
    return x * x;
}
```

Then:

```cpp
int y = square(5);
```

produces:

```text
25
```

Transition:

```text
Mathematical Function
        ↓
Input
        ↓
Transformation
        ↓
Output
        ↓
C++ Function
```

---

# 21. The Complete Transition Map

| Previous Knowledge | Concept | C++ Programming |
|---|---|---|
| Positive integers | Non-negative discrete values | `unsigned int` |
| Integers | Positive, zero, negative | `int`, `long long` |
| Decimal numbers | Real-number approximation | `float`, `double` |
| Variables | Named values | Variables |
| Arithmetic | Calculation | `+`, `-`, `*`, `/`, `%` |
| Formulas | Expressions | C++ expressions |
| Characters | Symbols | `char` |
| Words / sentences | Character sequences | `std::string` |
| True / False | Logic | `bool` |
| Inequalities | Comparison | `<`, `>`, `<=`, `>=`, `==` |
| Piecewise functions | Conditional rules | `if`, `else` |
| Sequences | Ordered values | Array, `std::vector` |
| Repeated calculation | Iteration | `for`, `while` |
| Functions | Input → Output | C++ functions |

---

# 22. A General Problem-Solving Framework

When solving a programming problem, students can ask:

### Step 1 — What do I already know?

Identify the mathematical, logical, or language concept.

### Step 2 — What information is given?

Identify the **input**.

### Step 3 — What kind of information is it?

Choose an appropriate **data type**.

```text
Integer?
Decimal?
Character?
String?
Boolean?
Collection?
```

### Step 4 — What relationship do I already know?

Identify:

- Formula
- Comparison
- Repetition
- Sequence
- Rule

### Step 5 — Translate it into C++

```text
Known Knowledge
      ↓
Representation
      ↓
Operation
      ↓
Algorithm
      ↓
Program
```

### Step 6 — Produce the result

Identify the required **output**.

---

# 23. From a Problem Statement to a Program

A useful mental model is:

```text
Problem
   ↓
Understand
   ↓
What do I already know?
   ↓
Mathematics / Logic / Language
   ↓
Input
   ↓
Data Type
   ↓
Formula / Rule / Algorithm
   ↓
C++ Code
   ↓
Output
```

This is the core of **Transition Learning for Programming**.

---

# 24. Example: Distance

Suppose:

```text
Speed = 60 km/h
Time  = 2 hours
```

From high-school mathematics:

$$
Distance=Speed\times Time
$$

Transition to programming:

### Input / Data

```cpp
double speed = 60.0;
double time = 2.0;
```

### Formula

```cpp
double distance = speed * time;
```

### Output

```cpp
std::cout << distance << '\n';
```

Complete program:

```cpp
#include <iostream>

int main() {
    double speed;
    double time;

    std::cin >> speed >> time;

    double distance = speed * time;

    std::cout << distance << '\n';

    return 0;
}
```

The programming knowledge is new, but the problem-solving knowledge is not.

---

# 25. Transition Learning Philosophy

The purpose of the course is therefore not:

```text
Memorize C++ Syntax
```

Instead:

```text
What I Already Know
        ↓
Understand the Problem
        ↓
Represent the Information
        ↓
Translate the Relationship
        ↓
Design an Algorithm
        ↓
Express It in C++
```

Programming becomes a new language for expressing existing knowledge and developing new problem-solving abilities.

---

# 26. Key Message

> **You are not learning programming from zero.**

You already know:

- Numbers
- Variables
- Formulas
- Logic
- Characters
- Words
- Sequences
- Repeated calculations
- Functions

C++ gives you a new way to **represent**, **organize**, and **process** them.

The learning journey is:

```text
Known
  ↓
Connected
  ↓
Represented
  ↓
Computed
  ↓
Programmed
```

## Transition Learning

> **From what you already know to what you are ready to learn.**
