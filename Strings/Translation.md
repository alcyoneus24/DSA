# Translation

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Reversing Strings
* String Comparison

## Pattern

* Reverse and Compare

## Key Observation

The translation is correct if the second word is exactly the reverse of the first word.

Example:

```text
code
edoc
```

The reverse of:

```text
edoc
```

is:

```text
code
```

which matches the first string.

Therefore, the answer is:

```text
YES
```

## Approach

1. Read strings `s` and `t`.
2. Reverse string `t`.
3. Compare `s` and the reversed `t`.
4. If they are equal, print `YES`.
5. Otherwise, print `NO`.

## Example

Input:

```text
code
edoc
```

Reverse:

```text
edoc → code
```

Compare:

```text
code == code
```

Output:

```text
YES
```

## Time Complexity

```text
O(n)
```

Reversing the string requires one traversal.

## Space Complexity

```text
O(n)
```

A reversed copy of the string is created.

## What I Learned

* Reversing strings using reverse iterators.
* Comparing two strings directly.
* Understanding string manipulation techniques.
* Using STL string constructors.

## Functions and Concepts Used

### Reverse Iterators

```cpp
string(t.rbegin(), t.rend())
```

Creates a reversed copy of the string.

Example:

```text
abc
```

becomes:

```text
cba
```

### String Comparison

```cpp
if(s == t)
```

Checks whether two strings are identical.

## Solution Idea

```text
Read s and t
      ↓
Reverse t
      ↓
Compare with s
      ↓
Equal?
 ↓       ↓
YES      NO
```
