# Boy or Girl

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Frequency Array
* Counting Distinct Characters

## Pattern

* Count Unique Elements

## Key Observation

The gender is determined by the number of distinct characters in the username.

* Even number of distinct characters → `CHAT WITH HER!`
* Odd number of distinct characters → `IGNORE HIM!`

## Approach

1. Read the username.
2. Use a frequency array of size 26.
3. Count how many different characters appear.
4. Check whether the count is odd or even.
5. Print the appropriate message.

## Example

Input:

```text
wjmzbmr
```

Distinct characters:

```text
w j m z b r
```

Count:

```text
6
```

Output:

```text
CHAT WITH HER!
```

## Time Complexity

```text
O(n)
```

## Space Complexity

```text
O(1)
```

The frequency array always has size 26.

## What I Learned

* Using a frequency array for character counting.
* Counting distinct characters.
* Determining odd/even using the modulus operator.
* Working with lowercase English letters.