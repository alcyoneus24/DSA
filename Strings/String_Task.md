# String Task

## Platform

Codeforces

## Difficulty

Easy

## Concepts

- Strings
- Character Traversal
- Character Conversion
- Conditional Statements

## Pattern

- String Processing
- Character Filtering

## Key Observation

For every character in the string:

1. Convert it to lowercase.
2. Check if it is a vowel.
3. If it is a vowel, ignore it.
4. If it is a consonant:

   - Add a '.' before it.
   - Print the lowercase consonant.

Vowels are:

```text
a, e, i, o, u, y
```

## Approach

1. Read the input string.
2. Traverse the string character by character.
3. Convert each character to lowercase using:

```cpp
tolower(c)
```

4. Check whether the character is a vowel.
5. If it is not a vowel:

   - Print '.' followed by the character.

## Example

Input:

```text
Codeforces
```

Convert to lowercase:

```text
codeforces
```

Remove vowels:

```text
c d f r c s
```

Add '.' before each consonant:

```text
.c.d.f.r.c.s
```

Output:

```text
.c.d.f.r.c.s
```

## Time Complexity

```text
O(n)
```

where n is the length of the string.

## Space Complexity

```text
O(1)
```

No extra data structures are required.

## What I Learned

- Using `tolower()` to convert characters to lowercase.
- Traversing strings using a loop.
- Checking multiple conditions using `||`.
- Filtering characters based on specific rules.
- Basic string manipulation.
