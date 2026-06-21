# Domino Piling

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Mathematics
* Integer Division
* Observation

## Pattern

* Count Total Units
* Divide by Capacity

## Key Observation

A domino covers exactly:

```text
2 squares
```

The board contains:

```text
m × n squares
```

Therefore, the maximum number of dominoes that can fit on the board is:

```cpp
(m * n) / 2
```

If the total number of squares is odd, one square will remain uncovered.

## Approach

1. Read `m` and `n`.
2. Calculate the total number of squares:

```cpp
m * n
```

3. Divide by 2 using integer division.
4. Print the result.

## Example 1

Input:

```text
2 4
```

Total squares:

```text
2 × 4 = 8
```

Maximum dominoes:

```text
8 / 2 = 4
```

Output:

```text
4
```

## Example 2

Input:

```text
3 3
```

Total squares:

```text
3 × 3 = 9
```

Maximum dominoes:

```text
9 / 2 = 4
```

Output:

```text
4
```

## Time Complexity

```text
O(1)
```

Only a single calculation is performed.

## Space Complexity

```text
O(1)
```

No extra memory is required.

## What I Learned

* Using mathematical observations to simplify a problem.
* Integer division automatically removes the decimal part.
* Not every problem requires simulation.
* Converting a real-world arrangement problem into a simple formula.

## Formula Used

```cpp
(m * n) / 2
```

## Solution Idea

```text
Total Squares
      ↓
m × n
      ↓
Each Domino Covers 2 Squares
      ↓
(m × n) / 2
      ↓
Answer
```
