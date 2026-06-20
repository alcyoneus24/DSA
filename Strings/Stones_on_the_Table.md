# Stones on the Table

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Character Comparison
* Counting

## Pattern

* Compare Adjacent Characters

## Key Observation

If two neighboring stones have the same color, one of them must be removed.

Therefore, we only need to count how many adjacent pairs contain the same character.

## Approach

1. Read the number of stones `n`.
2. Read the string representing the colors.
3. Traverse the string from left to right.
4. Compare each character with the next one.
5. If they are equal, increment the count.
6. Print the count.

## Example

Input:

```text
3
RRG
```

Comparisons:

```text
R == R  → count = 1
R != G  → count = 1
```

Output:

```text
1
```

---

Input:

```text
5
RRRRR
```

Comparisons:

```text
R == R → count = 1
R == R → count = 2
R == R → count = 3
R == R → count = 4
```

Output:

```text
4
```

## Time Complexity

```text
O(n)
```

One traversal of the string.

## Space Complexity

```text
O(1)
```

Only a counter variable is used.

## What I Learned

* Comparing neighboring characters in a string.
* Counting occurrences based on a condition.
* Solving problems using observation.
* Traversing strings efficiently.

## Functions and Concepts Used

### String Indexing

```cpp
s[i]
```

Accesses the character at index `i`.

### Adjacent Comparison

```cpp
s[i] == s[i + 1]
```

Checks whether two neighboring stones have the same color.

## Solution Idea

```text
Traverse String
       ↓
Compare Adjacent Characters
       ↓
Same?
       ↓
count++
       ↓
Print Count
```