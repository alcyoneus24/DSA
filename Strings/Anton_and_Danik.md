# Anton and Danik

## Platform

Codeforces

## Difficulty

A

## Concepts

* Strings
* Character Counting
* Conditional Statements

## Pattern

Count occurrences and compare totals.

## Problem Summary

Anton and Danik played `n` chess games.

The result of each game is stored in a string:

* `'A'` → Anton won
* `'D'` → Danik won

We need to determine:

* If Anton won more games → print `"Anton"`
* If Danik won more games → print `"Danik"`
* If both won the same number of games → print `"Friendship"`

## Key Observation

The string already contains the result of every game.

Therefore:

* Count how many times `'A'` appears.
* Count how many times `'D'` appears.
* Compare the counts.

## Approach

### Step 1

Read:

```cpp
cin >> n;
cin >> s;
```

### Step 2

Traverse the string:

```cpp
for(int i = 0; i < n; i++)
```

### Step 3

Count wins:

```cpp
if(s[i] == 'A')
    anton++;
else
    danik++;
```

### Step 4

Compare the totals:

```cpp
if(anton > danik)
```

Anton wins.

```cpp
else if(anton < danik)
```

Danik wins.

Otherwise:

```cpp
Friendship
```

## Example 1

Input:

```text
6
ADAAAA
```

Count:

```text
Anton = 5
Danik = 1
```

Output:

```text
Anton
```

## Example 2

Input:

```text
7
DDDAADA
```

Count:

```text
Anton = 3
Danik = 4
```

Output:

```text
Danik
```

## Example 3

Input:

```text
6
DADADA
```

Count:

```text
Anton = 3
Danik = 3
```

Output:

```text
Friendship
```

## Time Complexity

```text
O(n)
```

We traverse the string once.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

* Reading and traversing strings.
* Counting character occurrences.
* Using counters to track frequencies.
* Comparing results using conditional statements.

## Functions and Concepts Used

### Character Access

```cpp
s[i]
```

Accesses the character at index `i`.

### Character Comparison

```cpp
s[i] == 'A'
```

Checks whether Anton won that game.

### Counting

```cpp
anton++;
```

Increases Anton's win count.

### Conditional Statements

```cpp
if(anton > danik)
```

Determines the overall winner.

## Solution Idea

```text
Read n and String
        ↓
Traverse String
        ↓
'A' ? → Anton++
'D' ? → Danik++
        ↓
Compare Counts
        ↓
Anton > Danik ?
     ↓
   Yes → Anton
     ↓
   No
     ↓
Danik > Anton ?
     ↓
   Yes → Danik
     ↓
   No
     ↓
Friendship
```