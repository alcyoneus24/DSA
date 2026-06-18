# Petya and Strings

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Character Conversion
* String Comparison
* Lexicographical Order

## Pattern

* Case-Insensitive String Comparison

## Key Observation

The comparison must ignore letter case.

Therefore:

1. Convert both strings to lowercase.
2. Compare them lexicographically.

## Approach

1. Read two strings.
2. Convert every character of both strings to lowercase using `tolower()`.
3. Compare the strings:

   * If first string < second string, print `-1`.
   * If first string > second string, print `1`.
   * Otherwise print `0`.

## Example

Input:

```text
abs
Abz
```

Convert to lowercase:

```text
abs
abz
```

Compare:

```text
abs < abz
```

Output:

```text
-1
```

## Time Complexity

O(n)

where n is the length of the strings.

## Space Complexity

O(1)

## What I Learned

* Using `tolower()` to perform case-insensitive comparisons.
* Strings can be compared directly using:

  * `<`
  * `>`
  * `==`
* Understanding lexicographical (dictionary) order.