# Next Round

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Arrays
* Array Indexing
* Loops
* Counting
* Condition Checking

## Pattern

* Find Threshold
* Count Elements Satisfying a Condition

## Key Observation

A participant advances if:

1. Their score is greater than 0.
2. Their score is greater than or equal to the k-th place score.

The cutoff score is:

```cpp
scores[k - 1]
```

because arrays use 0-based indexing.

Example:

```text
k = 5
```

The 5th place score is stored at:

```cpp
scores[4]
```

## Approach

1. Read `n` and `k`.
2. Store all scores in an array.
3. Find the target score:

```cpp
target = scores[k - 1];
```

4. Traverse the array.
5. Count every score that satisfies:

```cpp
score >= target && score > 0
```

6. Print the count.

## Example

Input:

```text
8 5
10 9 8 7 7 7 5 5
```

Target Score:

```text
7
```

Check each score:

```text
10 ✓
9  ✓
8  ✓
7  ✓
7  ✓
7  ✓
5  ✗
5  ✗
```

Answer:

```text
6
```

## Time Complexity

```text
O(n)
```

One pass to read scores and one pass to count.

## Space Complexity

```text
O(n)
```

Using an array to store the scores.

## What I Learned

* How to store multiple values using arrays.
* Arrays use 0-based indexing.
* The k-th element is stored at index `k - 1`.
* How to count elements satisfying a condition.
* How to use a threshold value to filter data.