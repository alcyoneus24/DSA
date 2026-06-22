# Twins

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Arrays
* Sorting
* Greedy Algorithm
* Running Sum

## Pattern

* Sort
* Take Largest First

## Key Observation

To obtain a sum that is strictly greater than the remaining coins while taking the minimum number of coins, we should always take the largest available coin first.

This is a Greedy approach.

## Approach

1. Read all coin values.
2. Calculate the total sum of all coins.
3. Sort the coins in descending order.
4. Start taking coins from the largest value.
5. Keep track of:

   * Your current sum
   * Number of coins taken
6. Stop when:

```cpp
mySum > totalSum - mySum
```

7. Print the number of coins taken.

## Example

Input:

```text
3
2 1 2
```

Total sum:

```text
5
```

After sorting:

```text
2 2 1
```

Take first coin:

```text
mySum = 2
remaining = 3
```

Not enough.

Take second coin:

```text
mySum = 4
remaining = 1
```

Now:

```text
4 > 1
```

Coins taken:

```text
2
```

Output:

```text
2
```

## Time Complexity

```text
O(n log n)
```

Due to sorting.

## Space Complexity

```text
O(1)
```

Only a few extra variables are used.

## What I Learned

* Using sorting to simplify a problem.
* Understanding Greedy algorithms.
* Maintaining a running sum.
* Making locally optimal choices to reach a global solution.

## Functions and Concepts Used

### Sorting in Descending Order

```cpp
sort(coins, coins + n, greater<int>());
```

Sorts the array from largest to smallest.

Example:

```text
1 4 2 3
```

becomes:

```text
4 3 2 1
```

### Running Sum

```cpp
mySum += coins[i];
```

Keeps track of the total value of selected coins.

### Greedy Choice

```text
Always take the largest coin available.
```

This minimizes the number of coins needed.

## Solution Idea

```text
Read Coins
      ↓
Calculate Total Sum
      ↓
Sort Descending
      ↓
Take Largest Coin
      ↓
Update Sum
      ↓
mySum > remainingSum ?
      ↓
Yes → Stop
No  → Continue
      ↓
Print Count
```
