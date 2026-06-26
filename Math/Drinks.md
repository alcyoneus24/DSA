# Drinks

## Platform

Codeforces

## Difficulty

B

## Concepts

* Arrays
* Mathematics
* Average Calculation
* Floating Point Numbers

## Pattern

Calculate the average of all percentages.

## Problem Summary

There are `n` drinks.

The `i-th` drink contains `p[i]%` orange juice.

Petya mixes equal amounts of all drinks and wants to know the percentage of orange juice in the final cocktail.

## Key Observation

Since equal amounts of each drink are mixed, the final orange juice percentage is simply the average of all percentages.

For example:

```text
50 50 100
```

Total percentage:

```text
50 + 50 + 100 = 200
```

Average:

```text
200 / 3 = 66.666666...
```

Answer:

```text
66.666666...
```

## Approach

### Step 1

Read the number of drinks:

```cpp
cin >> n;
```

### Step 2

Read all percentages and calculate their sum:

```cpp
total += p;
```

### Step 3

Find the average:

```cpp
total / n
```

### Step 4

Print the result.

Use `double` to avoid losing decimal values.

## Example

Input:

```text
4
0 25 50 75
```

Sum:

```text
150
```

Average:

```text
150 / 4 = 37.5
```

Output:

```text
37.5
```

## Why Double Is Needed

If we use:

```cpp
int total;
```

Then:

```cpp
200 / 3
```

becomes:

```text
66
```

because integer division removes the decimal part.

Using:

```cpp
double total;
```

gives:

```text
66.666666...
```

which is correct.

## Time Complexity

```text
O(n)
```

We traverse the list of drinks once.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

* Computing averages.
* Working with floating-point numbers.
* Understanding integer division in C++.
* Using `double` for precise calculations.

## Functions and Concepts Used

### Input

```cpp
cin >> p;
```

Reads the percentage of orange juice in a drink.

### Summation

```cpp
total += p;
```

Adds the current percentage to the total.

### Average

```cpp
total / n
```

Calculates the final orange juice percentage.

## Solution Idea

```text
Read n
   ↓
Read All Percentages
   ↓
Calculate Sum
   ↓
Find Average (Sum / n)
   ↓
Print Answer
```
