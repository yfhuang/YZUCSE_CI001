# Code Review Report: [Platform] [Problem ID] - [Problem Title]

Use this template to document your problem-solving process and identify concrete improvements. Write clearly, use your own words, and focus on evidence from your code and tests. Complete the final re-review checklist before submitting the report.

## 1. Problem Information

- **Platform:** UVa / LeetCode
- **Problem ID:** 
- **Problem Title:** 
- **Problem Link:** 
- **Language / Version:** 
- **Submission Result:** Accepted / Wrong Answer / Time Limit Exceeded / Runtime Error / Other
- **Source Code (Initial/Fail):** [src/your-file-name.cpp](./src/your-file-name.cpp)
- **Source Code (Final/Accepted):** [src/your-file-name.cpp](./src/your-file-name.cpp)
- **Review Date:** 

## 2. Problem Statement in My Own Words

Describe the problem in your own language. Do not copy the original statement.

- What is the input?
- What is the expected output?
- What are the main rules or constraints?
- What is the core task you must solve?

## 3. Thinking Logic and Solution Strategy

Explain how you thought about the problem and how you decided on your final approach.

### Initial Thoughts

- What was your first idea?
- What difficulty, risk, or ambiguity did you notice at the beginning?
- Why was the initial idea insufficient or inefficient?

### Final Strategy

- What method did you finally use?
- Why does this method work?
- What edge cases did you consider?

### Complexity Analysis

- **Time Complexity:** 
- **Space Complexity:** 
- Explain why these bounds satisfy the problem constraints.

## 4. Pseudocode

Write the main steps of your solution before showing the actual code. Include important conditions and loop boundaries.

```text
START
1. 
2. 
3. 
4. 
END
```

## 5. Fail Code vs Correct Code

Show the relevant code that failed first, then show the corrected version. If the first version was incomplete rather than rejected, explain what was missing.

### Fail Code

```cpp
// Paste the incorrect, incomplete, or rejected version here.
```

**Why it failed:**

- State the direct technical cause (for example: incorrect condition, missing boundary case, or invalid complexity).
- Identify the input or scenario that exposes the problem.

### Correct Code

```cpp
// Paste the corrected or accepted version here.
```

**Why it works:**

- Explain the invariant, key condition, or reasoning that establishes correctness.
- Explain how the correction handles the previously failing scenario.

## 6. Test Evidence

Record representative tests used to verify the solution.

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case |  |  |  |  |
| Boundary case |  |  |  |  |
| Edge case |  |  |  |  |
| Stress case (if applicable) |  |  |  |  |

Note any tests that initially failed and how the final solution resolved them.

## 7. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic |  |  |
| Edge Cases |  |  |
| Output Handling |  |  |
| Complexity |  |  |
| Code Quality |  |  |

### Reflection

- **Root cause:** What specific assumption, knowledge gap, or coding habit caused the issue?
- **Lesson learned:** What did debugging or reviewing this problem teach you?
- **Next action:** What concrete step will you take when solving a similar problem again?

## 8. AI Usage Disclaimer

- AI tools, if used, were used only to support learning, such as clarifying concepts or reviewing explanations.
- I independently understood, verified, and completed the solution and reflection in this report.

### AI Usage Record

Record which AI tools, if any, were used for each problem and how they were used.

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
|  |  |  |  |

## 9. Final Re-review Checklist

Before submitting, confirm the following:

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
