# Word

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Character Counting
* Case Conversion

## Pattern

* Count and Transform

## Key Observation

If a word contains:

```text id="s26c1n"
More uppercase letters
```

convert the entire word to uppercase.

Otherwise:

```text id="1k3n5y"
Convert the entire word to lowercase.
```

If the number of uppercase and lowercase letters is equal, the word must be converted to lowercase.

## Approach

1. Read the string.
2. Count:

   * Uppercase letters
   * Lowercase letters
3. Compare the counts.
4. If uppercase letters are more:

   * Convert the whole string to uppercase.
5. Otherwise:

   * Convert the whole string to lowercase.
6. Print the result.

## Example 1

Input:

```text id="4s6w4o"
HoUse
```

Count:

```text id="t3c9gq"
Uppercase = 2
Lowercase = 3
```

Since lowercase letters are more:

```text id="nl7h8g"
house
```

Output:

```text id="m7j5ho"
house
```

## Example 2

Input:

```text id="eqv7j2"
ViP
```

Count:

```text id="l9r8bn"
Uppercase = 2
Lowercase = 1
```

Since uppercase letters are more:

```text id="sx5n4k"
VIP
```

Output:

```text id="n8c4fj"
VIP
```

## Time Complexity

```text id="v7j2mq"
O(n)
```

One pass for counting and one pass for conversion.

## Space Complexity

```text id="k6w9rd"
O(1)
```

The string is modified in place.

## What I Learned

* Counting uppercase and lowercase characters.
* Using character utility functions.
* Converting an entire string to one case.
* Traversing strings multiple times.

## Functions and Concepts Used

### isupper()

```cpp id="b8q2ln"
isupper(s[i])
```

Checks whether a character is uppercase.

### toupper()

```cpp id="s5j9xm"
toupper(s[i])
```

Converts a character to uppercase.

### tolower()

```cpp id="h7n4cz"
tolower(s[i])
```

Converts a character to lowercase.

## Solution Idea

```text id="w2m8rv"
Read String
      ↓
Count Uppercase & Lowercase
      ↓
Uppercase > Lowercase ?
      ↓
   Yes        No
    ↓          ↓
Uppercase   Lowercase
Conversion  Conversion
      ↓
 Print Result
```