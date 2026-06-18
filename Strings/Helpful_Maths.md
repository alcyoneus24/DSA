# Helpful Maths

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Vectors
* Sorting
* Character Processing

## Pattern

* Extract → Sort → Rebuild

## Key Observation

The input contains only:

```text
1, 2, 3 and +
```

Example:

```text
3+2+1
```

To make the sum easier to calculate, the numbers must appear in non-decreasing order:

```text
1+2+3
```

Therefore:

1. Extract all numbers.
2. Sort them.
3. Reconstruct the expression using '+'.

## Approach

1. Read the string.
2. Traverse the string.
3. Ignore '+' characters.
4. Store digits in a vector.
5. Sort the vector.
6. Print the sorted numbers separated by '+'.

## Example

Input:

```text
3+2+1
```

Extract numbers:

```text
3 2 1
```

Sort:

```text
1 2 3
```

Output:

```text
1+2+3
```

## Time Complexity

```text
O(n log n)
```

Due to sorting.

## Space Complexity

```text
O(n)
```

For storing the digits.

## Functions Learned

### push_back()

Adds an element to the end of a vector.

```cpp
nums.push_back(s[i]);
```

### sort()

Sorts elements in ascending order.

```cpp
sort(nums.begin(), nums.end());
```

## What I Learned

* How to extract useful characters from a string.
* How to store data in a vector.
* How to sort data using `sort()`.
* How to reconstruct formatted output.
* Using conditions to avoid printing an extra '+'.