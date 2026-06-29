# Ultra-Fast Mathematician

## Platform

Codeforces

## Difficulty

A

## Concepts

* Strings
* Character Comparison
* XOR Logic

## Problem Summary

We are given two binary strings of equal length.

For each position:

* Output `1` if the digits are different.
* Output `0` if the digits are the same.

The resulting binary string is the answer.

---

## Key Observation

The operation described in the problem is exactly the behavior of the XOR operation.

XOR Table:

```text id="h7d1jz"
0 0 → 0
0 1 → 1
1 0 → 1
1 1 → 0
```

So for every index:

```text id="r2j5xo"
same digits      → 0
different digits → 1
```

---

## Example

Input:

```text id="p5u4ts"
1010100
0100101
```

Comparison:

```text id="lyc7oq"
1 0 → 1
0 1 → 1
1 0 → 1
0 0 → 0
1 1 → 0
0 0 → 0
0 1 → 1
```

Output:

```text id="swqz4x"
1110001
```

---

## Approach

### Step 1

Read the two strings.

```cpp id="hz1nfr"
string a, b;
cin >> a >> b;
```

### Step 2

Traverse both strings simultaneously.

```cpp id="hlzv3e"
for(int i = 0; i < a.length(); i++)
```

### Step 3

Compare the characters.

If they are equal:

```cpp id="v0p3iu"
cout << 0;
```

Otherwise:

```cpp id="v8p4gl"
cout << 1;
```

### Step 4

Print the resulting binary string.

---

## Accepted Solution

```cpp id="sx4h7r"
#include <iostream>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++) {
        if(a[i] == b[i]) {
            cout << 0;
        } else {
            cout << 1;
        }
    }

    return 0;
}
```

---

## Alternative Solution

Since the strings contain only `0` and `1`, we can directly use XOR logic:

```cpp id="5l72ga"
#include <iostream>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++) {
        cout << (a[i] != b[i]);
    }

    return 0;
}
```

---

## Time Complexity

```text id="q5cmnh"
O(n)
```

where `n` is the length of the strings.

Maximum:

```text id="hjlwmj"
100
```

so the solution is very fast.

---

## Space Complexity

```text id="vjrkhr"
O(1)
```

excluding the input strings.

---

## What I Learned

* Comparing characters of two strings at the same index.
* Building answers based on position-wise conditions.
* Understanding the XOR operation.
* Solving binary-string problems without converting strings to numbers.

## Pattern Recognition

Whenever a problem says:

```text id="a9xvnc"
Output 1 when two values differ
Output 0 when two values are the same
```

think about:

```text id="wk3tma"
XOR
```

because XOR behaves exactly this way.

---

## Dry Run

Input:

```text id="i6m2vl"
1110
1010
```

Process:

```text id="m1pxji"
1 vs 1 → 0
1 vs 0 → 1
1 vs 1 → 0
0 vs 0 → 0
```

Output:

```text id="z0k7m8"
0100
```
