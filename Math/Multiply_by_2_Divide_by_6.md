# Codeforces #1374B – Multiply by 2, Divide by 6

## Difficulty

B

## Concepts

- Mathematics
- Number Theory
- Prime Factorization
- Greedy
- Implementation

## Problem Summary

You are given an integer `n`.

In one move, you can:

1. Multiply `n` by **2**.
2. Divide `n` by **6** (only if it is divisible by 6).

Your task is to determine the **minimum number of moves** required to make `n` equal to `1`.

If it is impossible, print `-1`.

---

## Key Observation

Instead of simulating every operation, analyze the **prime factorization** of the number.

Every division by **6** removes:

```text
6 = 2 × 3
```

So each divide-by-6 operation removes:

- One factor of **2**
- One factor of **3**

A multiplication by **2** simply adds one factor of **2**.

Therefore, the prime factorization of the number determines whether reaching `1` is possible.

---

## Important Conditions

Suppose

```text
n = 2^a × 3^b
```

### Condition 1

If the number contains any prime factor other than **2** or **3**, then it is impossible.

Example:

```text
30 = 2 × 3 × 5
```

The factor **5** can never be removed.

Answer:

```text
-1
```

---

### Condition 2

If the exponent of **2** is greater than the exponent of **3**, it is also impossible.

Example:

```text
72 = 2³ × 3²
```

Each divide-by-6 removes one `2` and one `3`.

Eventually all the `3`s disappear while extra `2`s remain.

Those extra `2`s can never be removed.

Answer:

```text
-1
```

---

## Approach

For each test case:

1. Count how many times `2` divides the number.
2. Count how many times `3` divides the number.
3. If another prime factor remains, print `-1`.
4. If the exponent of `2` is greater than the exponent of `3`, print `-1`.
5. Otherwise:
   - Multiply by `2` exactly `(count3 - count2)` times.
   - Divide by `6` exactly `count3` times.
6. Total moves:

```text
(count3 - count2) + count3
```

---

## Example

### Input

```text
3
3
54
72
```

### Case 1

```text
3 = 3¹

count2 = 0
count3 = 1

Need one multiplication:

3 → 6

Need one division:

6 → 1

Moves = 2
```

---

### Case 2

```text
54 = 2¹ × 3³

count2 = 1
count3 = 3

Multiply twice:

54 → 108 → 216

Now divide three times:

216 → 36 → 6 → 1

Moves = 5
```

---

### Case 3

```text
72 = 2³ × 3²

count2 > count3

Impossible

Answer = -1
```

---

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        int count2 = 0, count3 = 0;

        while(n % 2 == 0){
            count2++;
            n /= 2;
        }

        while(n % 3 == 0){
            count3++;
            n /= 3;
        }

        if(n != 1 || count2 > count3){
            cout << -1 << endl;
        }
        else{
            cout << (count3 - count2) + count3 << endl;
        }
    }

    return 0;
}
```

---

## Time Complexity

```text
O(log n)
```

Each loop repeatedly divides the number by `2` or `3`, so the number decreases exponentially.

---

## Space Complexity

```text
O(1)
```

Only a few integer variables are used.

---

## What I Learned

- How to solve problems using **prime factorization**.
- Every divide-by-6 operation removes one factor of both `2` and `3`.
- Multiplication by `2` increases only the exponent of `2`.
- Sometimes analyzing exponents of prime factors is much easier than simulating operations.

---

## Pattern Recognition

Whenever a problem allows operations like:

- Multiply by a constant
- Divide by a constant
- Reach a target value

Think about:

```text
Prime Factorization
```

Instead of simulating operations, compare the exponents of the prime factors.

---

## Alternative Thought Process

A brute-force simulation of multiplying and dividing can lead to infinite loops and is difficult to optimize.

Instead:

1. Write the number as its prime factorization.
2. Observe how each operation changes the exponents.
3. Derive the minimum number of operations mathematically.

This transforms the problem into a simple counting problem rather than a simulation problem.

---

## Formula

If

```text
count2 ≤ count3
```

and no other prime factors exist, then

```text
Minimum Moves

= Multiplications + Divisions

= (count3 - count2) + count3
```

Otherwise,

```text
Answer = -1
```