# Codeforces #486A – Calculating Function

## Difficulty
A

## Concepts
Mathematics, Pattern Recognition, Observation, Implementation

## Problem Summary

For a positive integer `n`, the function is defined as:

```text
f(n) = -1 + 2 - 3 + 4 - 5 + ... + (-1)^n n
```

Your task is to calculate the value of `f(n)`.

The value of `n` can be as large as:

```text
10^15
```

so a direct simulation is not possible.

## Key Observation

The terms form pairs:

```text
-1 + 2 = 1
-3 + 4 = 1
-5 + 6 = 1
...
```

Each pair contributes:

```text
1
```

### Case 1: n is Even

For example:

```text
n = 4

(-1 + 2) + (-3 + 4)
= 1 + 1
= 2
```

In general:

```text
f(n) = n / 2
```

### Case 2: n is Odd

For example:

```text
n = 5

(-1 + 2) + (-3 + 4) - 5
= 2 - 5
= -3
```

In general:

```text
f(n) = -(n + 1) / 2
```

This allows us to compute the answer in constant time.

## Approach

1. Read `n`.
2. Check whether `n` is even or odd.
3. If `n` is even:
   - Print `n / 2`.
4. Otherwise:
   - Print `-(n + 1) / 2`.

## Example

### Input

```text
4
```

### Calculation

```text
-1 + 2 - 3 + 4
= 2
```

### Output

```text
2
```

---

### Input

```text
5
```

### Calculation

```text
-1 + 2 - 3 + 4 - 5
= -3
```

### Output

```text
-3
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n % 2 == 0){
        cout << n / 2;
    }
    else{
        cout << -(n + 1) / 2;
    }

    return 0;
}
```

## Time Complexity

```text
O(1)
```

Only a few arithmetic operations are performed.

## Space Complexity

```text
O(1)
```

No extra data structures are used.

## What I Learned

- Large constraints often rule out brute force solutions.
- Looking for patterns can simplify a problem dramatically.
- Mathematical observations can reduce an O(n) solution to O(1).
- Always check whether terms can be grouped or paired.

## Pattern Recognition

When you see:

- Alternating positive and negative terms
- Very large constraints
- A sequence with a repeating pattern

Try writing out the first few values and looking for a formula instead of simulating every term.

This is a common Codeforces technique where observation is more important than implementation.