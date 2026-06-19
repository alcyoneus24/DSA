# Word Capitalization

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Character Manipulation
* ASCII Functions

## Pattern

* Modify Specific Character

## Key Observation

Only the first character needs to be capitalized.

All other characters must remain unchanged.

## Approach

1. Read the word.
2. Convert the first character to uppercase using `toupper()`.
3. Print the modified string.

## Example

Input:

```text
konjac
```

Convert first character:

```text
k → K
```

Result:

```text
Konjac
```

Output:

```text
Konjac
```

## Time Complexity

```text
O(1)
```

Only one character is modified.

## Space Complexity

```text
O(1)
```

## What I Learned

* Accessing characters using indexing.
* Using `toupper()` to convert characters to uppercase.
* Modifying strings in-place.
* Understanding capitalization.
