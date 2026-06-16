# Way Too Long Words

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* String Length
* String Indexing
* Loops

## Pattern

* String Manipulation

## Key Observation

If the length of a word is greater than 10:

```text
first letter
+
(number of middle characters)
+
last letter
```

Example:

```text
localization
```

Length:

```text
12
```

Abbreviation:

```text
l10n
```

because:

```text
12 - 2 = 10
```

characters are between the first and last letters.

## Approach

For each word:

1. Check its length.
2. If length ≤ 10:

   * Print the word.
3. Otherwise:

   * Print the first character.
   * Print length - 2.
   * Print the last character.

## Time Complexity

O(n)

where n is the number of words.

## Space Complexity

O(1)

## What I Learned

* Using `s.length()`.
* Accessing characters with `s[i]`.
* First character: `s[0]`.
* Last character: `s[s.length() - 1]`.
* Processing multiple test cases using a loop.
* Basic string manipulation.

## Example

Word:

```text
internationalization
```

Length:

```text
20
```

Abbreviation:

```text
i18n
```

because:

```text
20 - 2 = 18
```

characters are between the first and last letters.

