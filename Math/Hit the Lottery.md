# Codeforces #996A – Hit the Lottery

## Difficulty

A

## Concepts

- Greedy Algorithm
- Implementation
- Mathematics

## Problem Summary

Allen wants to withdraw exactly `n` dollars from the bank.

The available bill denominations are:

```text
1, 5, 10, 20, 100
```

Find the minimum number of bills required to withdraw the entire amount.

## Key Observation

To minimize the number of bills, always choose the **largest denomination possible**.

Since every larger denomination is a multiple or combination of smaller ones, taking the largest bill first is always optimal.

This is a classic **Greedy Algorithm** problem.

## Approach

1. Start with the largest bill (`100`).
2. Keep taking that bill while possible.
3. Move to the next largest denomination (`20`, `10`, `5`, `1`).
4. Count every bill taken.
5. Print the total count.

## Example

### Input

```text
125
```

### Processing

```text
125 → Take 100 → Remaining = 25

25 → Take 20 → Remaining = 5

5 → Take 5 → Remaining = 0
```

Bills used:

```text
100, 20, 5
```

Answer:

```text
3
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;

    while(n > 0){
        if(n >= 100){
            n = n - 100;
            count++;
        }
        else if(n >= 20){
            n = n - 20;
            count++;
        }
        else if(n >= 10){
            n = n - 10;
            count++;
        }
        else if(n >= 5){
            n = n - 5;
            count++;
        }
        else{
            n = n - 1;
            count++;
        }
    }

    cout << count;
    return 0;
}
```

## Alternative Solution (Optimized)

Instead of subtracting one bill at a time, calculate how many bills of each denomination can be used directly.

```cpp
count += n / 100;
n %= 100;

count += n / 20;
n %= 20;

count += n / 10;
n %= 10;

count += n / 5;
n %= 5;

count += n;
```

This performs only a fixed number of operations.

## Time Complexity

### Accepted Solution

```text
O(Number of Bills)
```

In the worst case, the loop executes once for every bill used.

### Optimized Solution

```text
O(1)
```

Only five denominations are processed.

## Space Complexity

```text
O(1)
```

No extra data structures are used.

## What I Learned

- How the Greedy Algorithm can produce an optimal solution.
- Why choosing the largest denomination first minimizes the total number of bills.
- That an accepted solution isn't always the most optimized one.
- How the same greedy idea can be implemented using either repeated subtraction or division with modulo.

## Pattern Recognition

When a problem asks:

- Minimum number of coins or bills
- Fixed denominations
- Largest denomination should be preferred

Think:

```text
Greedy Algorithm
```

Typical optimized pattern:

```cpp
count += amount / denomination;
amount %= denomination;
```

This technique is commonly used in currency and coin change problems where the denominations allow a greedy solution.

## Alternative Thought Process

Instead of repeatedly subtracting bills:

```text
125

125 → 25 → 5 → 0
```

calculate the number of bills directly:

```text
100-dollar bills = 125 / 100 = 1

Remaining = 25

20-dollar bills = 25 / 20 = 1

Remaining = 5

5-dollar bills = 5 / 5 = 1

Total Bills = 3
```

Both methods are greedy, but the second approach is more efficient.