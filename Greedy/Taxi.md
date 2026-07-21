# Codeforces #158B – Taxi

## Difficulty

B

## Concepts

- Greedy Algorithm
- Frequency Counting
- Implementation

## Problem Summary

There are `n` groups of children waiting for taxis.

Each group contains between **1 and 4** children.

A taxi can carry **at most 4 children**, and **a group cannot be split**.

Find the **minimum number of taxis** required to transport all groups.

## Key Observation

The total number of children is **not enough** to determine the answer because groups cannot be divided.

Instead, count how many groups of each size exist and combine them optimally.

The best combinations are:

```text
4

3 + 1

2 + 2

2 + 1 + 1

1 + 1 + 1 + 1
```

This makes the problem a classic **Greedy Algorithm**.

## Approach

1. Count the number of groups of sizes `1`, `2`, `3`, and `4`.
2. Every group of `4` gets its own taxi.
3. Every group of `3` gets one taxi and, if possible, one group of `1`.
4. Pair groups of `2` together.
5. If one group of `2` remains, place up to two groups of `1` with it.
6. Put the remaining groups of `1` into taxis, four per taxi.

## Example

### Input

```text
5
1 2 4 3 3
```

### Processing

```text
4 → Taxi 1

3 → Taxi 2

3 → Taxi 3

2 + 1 → Taxi 4
```

### Output

```text
4
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x == 1) count1++;
        else if(x == 2) count2++;
        else if(x == 3) count3++;
        else count4++;
    }

    int taxis = 0;

    taxis += count4;

    taxis += count3;

    if(count1 >= count3)
        count1 -= count3;
    else
        count1 = 0;

    taxis += count2 / 2;
    count2 %= 2;

    if(count2){
        taxis++;

        if(count1 >= 2)
            count1 -= 2;
        else
            count1 = 0;
    }

    taxis += (count1 + 3) / 4;

    cout << taxis;

    return 0;
}
```

## Time Complexity

```text
O(n)
```

The input is traversed once to count the groups.

## Space Complexity

```text
O(1)
```

Only four counters are used.

## What I Learned

- How Greedy Algorithms can produce an optimal solution.
- Why counting frequencies is often better than storing the entire array.
- That the total number of children alone is insufficient because groups cannot be split.
- How to combine different group sizes efficiently.

## Pattern Recognition

When a problem asks you to:

- Minimize the number of containers, vehicles, or resources
- Combine items under a capacity constraint
- Keep items/groups intact

Think:

```text
Greedy + Frequency Counting
```

A common approach is:

```text
Count frequencies

↓

Combine the largest groups first

↓

Fit smaller groups into the remaining space

↓

Handle leftovers
```

## Alternative Thought Process

Instead of considering every group individually, classify them by size.

```text
Count groups of:

1
2
3
4
```

Then combine them in the most efficient order:

```text
4

3 + 1

2 + 2

2 + 1 + 1

1 + 1 + 1 + 1
```

This greedy strategy guarantees the minimum number of taxis.