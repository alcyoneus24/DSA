# Codeforces #977A – Wrong Subtraction

## Difficulty

A

## Concepts

- Mathematics
- Simulation
- Modulo Operator
- Implementation

## Problem Summary

Little Tanya decreases a number using a special rule:

- If the last digit is non-zero, subtract `1`.
- If the last digit is `0`, remove the last digit (divide by `10`).

Given a number `n` and a number of operations `k`, determine the value of `n` after performing the operation exactly `k` times.

## Key Observation

The operation depends only on the last digit of the number.

If:

```text
n % 10 != 0
```

then:

```text
n = n - 1
```

Otherwise:

```text
n = n / 10
```

We simply simulate the process `k` times.

## Approach

1. Read `n` and `k`.
2. Repeat `k` times:
   - If the last digit is not zero, subtract `1`.
   - Otherwise, divide the number by `10`.
3. Print the final value of `n`.

## Example

### Input

```text
512 4
```

### Processing

```text
512 → 511
511 → 510
510 → 51
51 → 50
```

### Output

```text
50
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < k; i++){

        if(n % 10 != 0){
            n = n - 1;
        }
        else{
            n = n / 10;
        }
    }

    cout << n;

    return 0;
}
```

## Time Complexity

```text
O(k)
```

At most `k = 50` operations are performed.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

- How to use the modulo operator to access the last digit of a number.
- How to simulate a process step by step.
- How integer division can be used to remove the last digit.
- How simple mathematical observations can lead to easy implementations.

## Pattern Recognition

When a problem asks:

- Perform an operation repeatedly
- Modify a number based on its last digit
- Simulate a sequence of transformations

Think:

```text
Simulation + Modulo Arithmetic
```

Common pattern:

```cpp
if(n % 10 == 0)
    n /= 10;
else
    n--;
```

This type of digit manipulation appears frequently in beginner Codeforces problems.

## Alternative Thought Process

Instead of thinking about subtraction, focus on the last digit:

```text
Last digit ≠ 0 → decrease by 1
Last digit = 0 → remove digit
```

Applying this rule repeatedly naturally produces the required result.