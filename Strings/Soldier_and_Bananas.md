# Soldier and Bananas

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Mathematics
* Arithmetic Series
* Loops
* Conditional Statements

## Pattern

* Calculate Total Cost
* Compare With Available Money

## Key Observation

The cost of bananas increases linearly:

```text
1st banana = k
2nd banana = 2k
3rd banana = 3k
...
w-th banana = w × k
```

The total cost is:

```text
k + 2k + 3k + ... + wk
```

After finding the total cost, compare it with the amount of money the soldier already has.

## Approach

1. Read `k`, `n`, and `w`.
2. Calculate the total cost of all bananas.
3. If the total cost is greater than `n`:

   * Borrow = `cost - n`
4. Otherwise:

   * Borrow = `0`
5. Print the answer.

## Example

Input:

```text
3 17 4
```

Banana costs:

```text
3
6
9
12
```

Total cost:

```text
3 + 6 + 9 + 12 = 30
```

Money available:

```text
17
```

Money to borrow:

```text
30 - 17 = 13
```

Output:

```text
13
```

## Time Complexity

```text
O(w)
```

We calculate the cost of each banana once.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

* Calculating cumulative sums using a loop.
* Understanding arithmetic growth.
* Comparing required resources with available resources.
* Handling cases where no borrowing is needed.

## Functions and Concepts Used

### Running Sum

```cpp
cost += k * i;
```

Adds the price of the current banana to the total cost.

### Conditional Check

```cpp
if(cost > n)
```

Determines whether borrowing is necessary.

## Solution Idea

```text
Read k, n, w
      ↓
Calculate Total Cost
      ↓
Cost > Money?
   ↓        ↓
 Yes       No
 ↓          ↓
Cost-n      0
      ↓
   Print Answer
```