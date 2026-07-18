# Codeforces #1328A – Divisibility Problem

## Difficulty

A

## Concepts

- Mathematics
- Modulo Operator
- Divisibility
- Implementation

## Problem Summary

You are given two positive integers `a` and `b`.

In one move, you can increase `a` by `1`.

Determine the minimum number of moves required to make `a` divisible by `b`.

Each test case is independent.

## Key Observation

If `a` is already divisible by `b`, then no moves are needed.

Otherwise, find how far `a` is from the next multiple of `b`.

The remainder tells us how much `a` exceeds the previous multiple:

```text
remainder = a % b
```

The number of moves required is:

```text
b - remainder
```

## Approach

1. Read the number of test cases.
2. For each test case:
   - If `a % b == 0`, print `0`.
   - Otherwise, print `b - (a % b)`.
3. Repeat for all test cases.

## Example

### Input

```text
3
10 4
13 9
92 46
```

### Processing

```text
10 % 4 = 2
Moves = 4 - 2 = 2

13 % 9 = 4
Moves = 9 - 4 = 5

92 % 46 = 0
Moves = 0
```

### Output

```text
2
5
0
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){

        long long a, b;
        cin >> a >> b;

        if(a % b == 0){
            cout << 0 << endl;
        }
        else{
            cout << b - (a % b) << endl;
        }
    }

    return 0;
}
```

## Time Complexity

```text
O(t)
```

Each test case is processed in constant time.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

- How to use the modulo operator to determine divisibility.
- How to find the next multiple of a number without simulation.
- Why mathematical observations are often more efficient than incrementing values one by one.
- How to process multiple test cases efficiently.

## Pattern Recognition

When a problem asks:

- Make a number divisible by another
- Find the minimum increments
- Reach the next multiple

Think:

```text
Modulo Arithmetic
```

Common pattern:

```cpp
if(a % b == 0)
    answer = 0;
else
    answer = b - (a % b);
```

This pattern is commonly used in competitive programming for divisibility and number theory problems.

## Alternative Thought Process

Instead of increasing `a` one step at a time:

```text
13 → 14 → 15 → 16 → 17 → 18
```

calculate the distance directly:

```text
13 % 9 = 4

Need:

9 - 4 = 5
```

This avoids unnecessary simulation and produces the answer instantly.