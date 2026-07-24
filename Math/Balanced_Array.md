# Codeforces #1343B – Balanced Array

## Difficulty

B

## Concepts

- Mathematics
- Constructive Algorithms
- Arrays
- Greedy
- Implementation

## Problem Summary

You are given an even integer `n`.

Construct an array of length `n` such that:

- The first `n/2` elements are **even**.
- The last `n/2` elements are **odd**.
- All elements are **distinct** and **positive**.
- The sum of the first half equals the sum of the second half.

If no such array exists, print `NO`.

Otherwise, print `YES` and any valid array.

---

## Key Observation

Let:

```text
k = n / 2
```

Choose the first half as the first `k` even numbers:

```text
2 4 6 ... 2k
```

For the second half:

- Take the first `k - 1` odd numbers.
- Compute the last odd number so that both halves have the same sum.

This guarantees the sums are equal whenever a valid solution exists.

---

## Why Does It Work?

Suppose

```text
n = 8
```

### Even Numbers

```text
2 4 6 8
```

Sum:

```text
20
```

### First Three Odd Numbers

```text
1 3 5
```

Sum:

```text
9
```

The last number must be

```text
20 - 9 = 11
```

Final array:

```text
2 4 6 8 1 3 5 11
```

Check:

```text
Even Sum = 20

Odd Sum = 1 + 3 + 5 + 11 = 20
```

Balanced!

---

## Why is `n % 4 == 0` Necessary?

Consider

```text
n = 6
```

Even numbers:

```text
2 4 6
```

Sum:

```text
12
```

First two odd numbers:

```text
1 3
```

Sum:

```text
4
```

Last number should be:

```text
12 - 4 = 8
```

But

```text
8
```

is **even**, while the second half must contain only **odd** numbers.

Therefore, no valid array exists.

The same problem occurs whenever

```text
n % 4 != 0
```

So,

```cpp
if(n % 4 != 0)
    cout << "NO";
```

Otherwise,

```cpp
cout << "YES";
```

---

## Approach

For each test case:

1. If `n` is not divisible by `4`, print `NO`.
2. Otherwise:
   - Print `YES`.
   - Print the first `n/2` even numbers.
   - Store their sum.
   - Print the first `n/2 - 1` odd numbers.
   - Store their sum.
   - Print the final odd number:

```text
last = evenSum - oddSum
```

This balances both halves.

---

## Example

### Input

```text
1
8
```

### Processing

Even numbers:

```text
2 4 6 8

Sum = 20
```

Odd numbers:

```text
1 3 5

Sum = 9
```

Last odd number:

```text
20 - 9 = 11
```

Final array:

```text
2 4 6 8 1 3 5 11
```

Output:

```text
YES
2 4 6 8 1 3 5 11
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

        int n;
        cin >> n;

        if(n % 4 != 0){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        int evenSum = 0;
        int oddSum = 0;

        // Print first n/2 even numbers
        for(int i = 2; i <= n; i += 2){
            cout << i << " ";
            evenSum += i;
        }

        // Print first (n/2 - 1) odd numbers
        for(int i = 1; i < n - 1; i += 2){
            cout << i << " ";
            oddSum += i;
        }

        // Print the last odd number
        cout << evenSum - oddSum << endl;
    }

    return 0;
}
```

---

## Time Complexity

```text
O(n)
```

Each number is printed exactly once.

---

## Space Complexity

```text
O(1)
```

Only a few variables are used.

---

## What I Learned

- Some problems require **constructing** a valid answer instead of searching for one.
- Mathematical observations can greatly simplify constructive problems.
- Using one adjustable element at the end is a common technique to satisfy sum constraints.
- Always check whether a solution is possible before constructing it.

---

## Pattern Recognition

Whenever a problem asks you to:

- Construct an array
- Satisfy multiple constraints
- Keep sums equal
- Print any valid answer

Think about:

- Constructive Algorithms
- Greedy Construction
- Adjusting the last element to satisfy the remaining condition

---

## Alternative Thought Process

A brute-force approach would try different even and odd combinations until the sums match.

This is impractical because the number of combinations grows rapidly.

Instead:

- Fix almost the entire array.
- Leave only one element unknown.
- Compute that element using the required sum.

This guarantees a solution whenever one exists.

---

## Key Takeaway

The trick is not finding random numbers.

Instead:

1. Use the smallest even numbers.
2. Use the smallest odd numbers.
3. Compute the final odd number to balance the sums.
4. A solution exists **only when**:

```text
n % 4 == 0
```

This makes the solution simple, efficient, and mathematically correct.