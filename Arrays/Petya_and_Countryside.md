# Petya and Countryside

## Platform

Codeforces

## Difficulty

B

## Concepts

* Arrays
* Simulation
* Brute Force
* Two-Sided Expansion

## Pattern

Try every position as the starting point and simulate the process.

## Problem Summary

Petya can create rain above exactly one section of the garden.

Water can flow to neighboring sections only if the neighboring section's height is not greater than the current section's height.

The goal is to find the maximum number of sections that can be watered by choosing the best starting section.

## Key Observation

For every section:

* Assume rain starts there.
* Expand to the left while water can flow.
* Expand to the right while water can flow.
* Count all reachable sections.
* Keep track of the maximum count.

Since:

```text
n ≤ 1000
```

an O(n²) solution is fast enough.

## Understanding Water Flow

Consider:

```text
1 2 1 1 1 3 3 4
          ^
```

Rain starts on the first `3`.

### Moving Left

```text
1 <= 3 ✓
1 <= 1 ✓
1 <= 1 ✓
2 <= 1 ✗
```

Water stops.

### Moving Right

```text
3 <= 3 ✓
4 <= 3 ✗
```

Water stops.

Total watered sections:

```text
1 2 1 1 1 3 3
```

Count = 7

## Approach

For each position:

### Step 1

Start with:

```cpp
count = 1;
```

because the current section is already watered.

### Step 2

Move left:

```cpp
if(h[j - 1] <= h[j])
```

Meaning:

> Can water flow from the current section to the section on the left?

If yes:

```cpp
count++;
```

Otherwise stop.

### Step 3

Move right:

```cpp
if(h[j + 1] <= h[j])
```

Meaning:

> Can water flow from the current section to the section on the right?

If yes:

```cpp
count++;
```

Otherwise stop.

### Step 4

Update the answer:

```cpp
maxWatered = max(maxWatered, count);
```

## Example

Input:

```text
5
1 2 1 2 1
```

Choose the first `2`:

```text
1 2 1 2 1
  ^
```

Water flows:

```text
1 ← 2 → 1
```

Watered sections:

```text
1 2 1
```

Count:

```text
3
```

This is the maximum possible answer.

Output:

```text
3
```

## Time Complexity

For every position we may traverse the entire array.

```text
O(n²)
```

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

* Simulating a process from every possible starting position.
* Expanding in both directions.
* Using nested loops for brute-force solutions.
* Understanding when O(n²) is acceptable.
* Interpreting problem statements carefully before coding.

## Functions and Concepts Used

### Traversing Left

```cpp
for(int j = i; j > 0; j--)
```

Checks how far water can travel to the left.

### Traversing Right

```cpp
for(int j = i; j < n - 1; j++)
```

Checks how far water can travel to the right.

### Updating Maximum

```cpp
maxWatered = max(maxWatered, count);
```

Stores the best answer found so far.

## Solution Idea

```text
Choose a Starting Section
            ↓
       Count = 1
            ↓
     Expand Left
            ↓
    Expand Right
            ↓
 Count Watered Sections
            ↓
 Update Maximum Answer
            ↓
 Repeat for Every Section
            ↓
      Print Maximum
```