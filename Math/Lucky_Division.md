# Codeforces #122A – Lucky Division

## Difficulty
A

## Concepts
Number Theory, Divisibility, Arrays, Brute Force

## Problem Summary

A lucky number is a positive integer whose decimal representation contains only the digits `4` and `7`.

Examples of lucky numbers:

- 4
- 7
- 44
- 47
- 74
- 77

A number is called **almost lucky** if it is divisible by at least one lucky number.

Given an integer `n`, determine whether it is almost lucky.

## Key Observation

Since:

```text
1 ≤ n ≤ 1000
```

there are only a few lucky numbers less than or equal to 1000:

```text
4, 7, 44, 47, 74, 77,
444, 447, 474, 477,
744, 747, 774, 777
```

We can simply check whether `n` is divisible by any of them.

## Approach

1. Store all lucky numbers less than or equal to 1000 in an array.
2. Traverse the array.
3. If `n % lucky[i] == 0`, print `YES`.
4. If none divide `n`, print `NO`.

## Accepted Solution

```cpp
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int lucky[] = {
        4, 7, 44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777
    };

    for(int i = 0; i < 14; i++){
        if(n % lucky[i] == 0){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
```

## Example

### Input

```text
16
```

### Check

```text
16 % 4 = 0
```

### Output

```text
YES
```

---

### Input

```text
78
```

### Check

```text
78 % 4   != 0
78 % 7   != 0
78 % 44  != 0
78 % 47  != 0
78 % 74  != 0
78 % 77  != 0
...
```

### Output

```text
NO
```

## Time Complexity

```text
O(14)
```

Since there are only 14 lucky numbers to check.

## Space Complexity

```text
O(1)
```

## What I Learned

- Lucky numbers contain only digits 4 and 7.
- Sometimes constraints allow a direct brute-force solution.
- Divisibility checks can simplify number theory problems.
- Precomputing a small set of valid values can avoid unnecessary complexity.

## Pattern Recognition

When constraints are very small, consider:

- Precomputing all valid candidates.
- Checking divisibility directly.
- Using brute force instead of generating values dynamically.