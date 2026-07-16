# Codeforces #2241A – Divide and Conquer

## Difficulty

A

## Concepts

- Mathematics
- Divisibility
- Modulo Operator
- Implementation

## Problem Summary

For each test case, you are given two integers `x` and `y`.

Determine whether `x` is divisible by `y`.

If:

```text
x % y == 0
```

print:

```text
YES
```

otherwise print:

```text
NO
```

## Key Observation

A number is divisible by another number if the remainder after division is zero.

For example:

```text
12 % 3 = 0
```

Therefore:

```text
12 is divisible by 3
```

Similarly:

```text
10 % 3 = 1
```

Since the remainder is not zero:

```text
10 is not divisible by 3
```

## Approach

1. Read the number of test cases.
2. Store all values of `x` and `y`.
3. For each test case:
   - Compute `x % y`.
   - If the remainder is zero, print `"YES"`.
   - Otherwise, print `"NO"`.

## Example

### Input

```text
3
12 3
10 3
25 5
```

### Processing

```text
12 % 3 = 0 → YES
10 % 3 = 1 → NO
25 % 5 = 0 → YES
```

### Output

```text
YES
NO
YES
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    int t, x, y;

    cin >> t;

    int xarr[t];
    int yarr[t];

    for(int i = 0; i < t; i++){
        cin >> xarr[i];
        cin >> yarr[i];
    }

    for(int j = 0; j < t; j++){

        if(xarr[j] % yarr[j] == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
```

## Time Complexity

```text
O(t)
```

Each test case is processed once.

## Space Complexity

```text
O(t)
```

Two arrays are used to store the inputs.

## What I Learned

- How to use the modulo operator `%`.
- How to check divisibility efficiently.
- How to process multiple test cases.
- Basic implementation of mathematical conditions.

## Pattern Recognition

When a problem asks:

- Is a number divisible by another?
- Check divisibility
- Determine if a remainder exists

Think:

```cpp
if(a % b == 0)
```

Common pattern:

```cpp
if(number % divisor == 0)
    YES
else
    NO
```

This is one of the most common mathematical checks in competitive programming.