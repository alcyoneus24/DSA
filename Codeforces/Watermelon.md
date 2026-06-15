# Watermelon

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* If-Else
* Modulus Operator (%)
* Even and Odd Numbers
* Logical Operators (&&)

## Pattern

* Observation
* Edge Case Analysis

## Key Observation

A watermelon can be divided into two positive even parts if and only if:

* The weight is even.
* The weight is greater than 2.

Examples:

* 2 → NO
* 4 → YES (2 + 2)
* 6 → YES (2 + 4)
* 8 → YES (2 + 6)

## Approach

1. Read the weight `w`.
2. Check if `w` is even using `% 2`.
3. Check if `w > 2`.
4. If both conditions are true, print `YES`.
5. Otherwise, print `NO`.

## Time Complexity

O(1)

## Space Complexity

O(1)

## What I Learned

* How to check whether a number is even.
* How to combine conditions using `&&`.
* The importance of testing edge cases.
* In competitive programming, finding the correct observation is often harder than writing the code.

## Common Mistakes

### Mistake 1

Checking only:

```cpp
w % 2 == 0
```

This fails for:

```text
w = 2
```

because 2 cannot be split into two positive even numbers.

### Mistake 2

Writing:

```cpp
1 <= w <= 100
```

in C++.

Correct way:

```cpp
w >= 1 && w <= 100
```

(Though this check is unnecessary in this problem because the constraints guarantee valid input.)
