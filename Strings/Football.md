# Football

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Traversal
* Consecutive Character Counting

## Pattern

* Count Consecutive Characters

## Key Observation

A situation is considered dangerous if there are:

```text
7 consecutive '0's
```

or

```text
7 consecutive '1's
```

While traversing the string, maintain separate counters for consecutive `0`s and `1`s.

Whenever the current character changes, reset the counter of the opposite character.

## Approach

1. Read the string.
2. Traverse it from left to right.
3. If the current character is `'0'`:

   * Increment `zeroCount`.
   * Reset `oneCount`.
4. If the current character is `'1'`:

   * Increment `oneCount`.
   * Reset `zeroCount`.
5. If either counter becomes `7`, print `"YES"` and terminate.
6. If the loop finishes without finding seven consecutive players, print `"NO"`.

## Example 1

Input:

```text
001001
```

Longest consecutive sequence:

```text
00
```

No sequence reaches 7.

Output:

```text
NO
```

## Example 2

Input:

```text
1000000001
```

Consecutive zeros:

```text
00000000
```

Length:

```text
8
```

Since `8 ≥ 7`, the answer is:

```text
YES
```

## Time Complexity

```text
O(n)
```

The string is traversed only once.

## Space Complexity

```text
O(1)
```

Only two counter variables are used.

## What I Learned

* Counting consecutive characters instead of total occurrences.
* Resetting counters when the current character changes.
* Using early termination (`return 0`) when the answer is already known.
* Solving string traversal problems efficiently.

## Functions and Concepts Used

### Character Comparison

```cpp
s[i] == '0'
```

Checks whether the current character is `'0'`.

### Consecutive Counting

```cpp
zeroCount++;
oneCount = 0;
```

Increases the count of consecutive zeros and resets the count of ones.

### Early Exit

```cpp
return 0;
```

Ends the program immediately after printing `"YES"` because further processing is unnecessary.

## Solution Idea

```text
Read String
      ↓
Traverse Characters
      ↓
Current Character?
   ↓           ↓
 '0'          '1'
  ↓            ↓
zero++      one++
one=0       zero=0
      ↓
Counter ≥ 7?
      ↓
 YES → Print YES & Exit
      ↓
No
      ↓
Continue
      ↓
Print NO
```