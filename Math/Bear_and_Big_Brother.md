# Bear and Big Brother

## Platform

Codeforces

## Difficulty

A

## Concepts

* Simulation
* Loops
* Basic Mathematics

## Pattern

Repeatedly update values until a condition becomes false.

## Problem Summary

Limak and Bob are two bears.

Initially:

* Limak weighs `a`
* Bob weighs `b`

Every year:

* Limak's weight becomes `3 × a`
* Bob's weight becomes `2 × b`

We need to find how many full years are required before Limak becomes strictly heavier than Bob.

## Key Observation

We do not need any complicated formula.

Simply simulate each year:

* Triple Limak's weight.
* Double Bob's weight.
* Count the year.

Stop when:

```text
Limak > Bob
```

Since:

```text
1 ≤ a ≤ b ≤ 10
```

the number of years will always be very small.

## Approach

### Step 1

Read:

```cpp
cin >> a >> b;
```

### Step 2

Initialize:

```cpp
int years = 0;
```

### Step 3

Keep updating weights while Limak is not heavier:

```cpp
while(a <= b)
```

### Step 4

Simulate one year:

```cpp
a *= 3;
b *= 2;
years++;
```

### Step 5

Print the answer.

## Example 1

Input:

```text
4 7
```

Initially:

```text
4 7
```

After 1 year:

```text
12 14
```

After 2 years:

```text
36 28
```

Now:

```text
36 > 28
```

Answer:

```text
2
```

## Example 2

Input:

```text
4 9
```

Years:

```text
12 18
36 36
108 72
```

Limak becomes heavier after:

```text
3
```

years.

## Example 3

Input:

```text
1 1
```

After 1 year:

```text
3 2
```

Limak is heavier.

Answer:

```text
1
```

## Time Complexity

```text
O(years)
```

The loop runs only a few times.

Given the constraints, this is effectively:

```text
O(1)
```

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

* Simulating a process step by step.
* Using a loop until a condition is satisfied.
* Updating multiple variables inside a loop.
* Solving simple growth problems without formulas.

## Functions and Concepts Used

### Multiplication Assignment

```cpp
a *= 3;
```

Equivalent to:

```cpp
a = a * 3;
```

### While Loop

```cpp
while(a <= b)
```

Runs until Limak becomes heavier than Bob.

### Counter Variable

```cpp
years++;
```

Counts how many years have passed.

## Solution Idea

```text
Read a and b
      ↓
years = 0
      ↓
a <= b ?
      ↓
    Yes
      ↓
a = a × 3
b = b × 2
years++
      ↓
Repeat
      ↓
a > b
      ↓
Print years
```