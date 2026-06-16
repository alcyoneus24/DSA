# Team

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Loops
* Counting
* Input Handling
* Condition Checking

## Pattern

* Count rows satisfying a condition

## Key Observation

Each problem contains three values:

* Petya
* Vasya
* Tonya

Each value is either:

* 1 = sure
* 0 = not sure

The team solves a problem if at least two friends are sure.

Therefore:

```cpp
a + b + c >= 2
```

## Approach

1. Read the number of problems `n`.
2. For each problem:

   * Read `a`, `b`, and `c`.
   * Calculate `sum = a + b + c`.
   * If `sum >= 2`, increment the counter.
3. Print the final count.

## Time Complexity

O(n)

## Space Complexity

O(1)

## What I Learned

* Reading multiple test cases.
* Counting valid cases using a counter.
* Keeping counters outside loops.
* Converting a logical condition into a simple arithmetic check.

## Example

Input:

```text
1 1 0
```

Sum:

```text
1 + 1 + 0 = 2
```

Since:

```text
2 >= 2
```

The problem will be solved.
