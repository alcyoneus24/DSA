# Panoramix's Prediction

## Platform

Codeforces

## Difficulty

A

## Concepts

* Prime Numbers
* Functions
* Simulation
* Number Theory

## Problem Summary

Given two numbers:

```text id="y5j7mf"
n and m
```

where `n` is guaranteed to be prime.

We need to determine whether `m` is the **immediate next prime number** after `n`.

Print:

```text id="z4u3gn"
YES
```

if `m` is the next prime after `n`, otherwise print:

```text id="d3mxfu"
NO
```

---

## Key Observation

The problem does **not** ask whether both numbers are prime.

Instead, it asks:

```text id="t2mn2u"
Is m the very next prime after n?
```

Example:

```text id="5w4j0r"
n = 3
m = 5
```

Prime sequence:

```text id="eqm4g6"
2, 3, 5, 7, 11...
```

The next prime after `3` is `5`.

Answer:

```text id="rn3ynv"
YES
```

---

## Counter Example

Input:

```text id="4c74j5"
3 7
```

Both numbers are prime.

However:

```text id="j0a9ea"
3 → 5 → 7
```

The next prime after `3` is `5`, not `7`.

Answer:

```text id="5j8jj8"
NO
```

---

## Approach

### Step 1

Create a function to check whether a number is prime.

```cpp id="r7gmnq"
bool isPrime(int num)
```

A number is prime if no number from:

```text id="bbg5l7"
2 to num - 1
```

divides it exactly.

---

### Step 2

Start searching after `n`.

```cpp id="7hngnn"
int next = n + 1;
```

---

### Step 3

Keep moving until a prime number is found.

```cpp id="n6yv66"
while(!isPrime(next))
{
    next++;
}
```

After the loop:

```text id="a2u6a7"
next = first prime after n
```

---

### Step 4

Compare with `m`.

```cpp id="hk9wbq"
if(next == m)
```

Print:

```text id="7u5owm"
YES
```

otherwise:

```text id="gcmqko"
NO
```

---

## Dry Run

Input:

```text id="v1vfe8"
7 11
```

Start:

```text id="slnc4w"
next = 8
```

Check:

```text id="w2y6af"
8  → not prime
9  → not prime
10 → not prime
11 → prime
```

Now:

```text id="njlwmn"
next = 11
```

Compare:

```text id="w2ukpb"
11 == 11
```

Output:

```text id="6d64o9"
YES
```

---

## Accepted Solution

```cpp id="zlxqpe"
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int next = n + 1;

    while(!isPrime(next))
    {
        next++;
    }

    if(next == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
```

---

## Time Complexity

Prime checking:

```text id="j7ow92"
O(num)
```

Searching for next prime:

```text id="w1ex5x"
O(50)
```

Since:

```text id="cccr09"
m ≤ 50
```

the solution is extremely fast.

Overall:

```text id="2jflm7"
O(1)
```

for the given constraints.

---

## Space Complexity

```text id="hchdd7"
O(1)
```

Only a few integer variables are used.

---

## What I Learned

* Writing helper functions.
* Checking whether a number is prime.
* Using boolean functions.
* Finding the next valid value through iteration.
* Understanding the difference between:

  * Prime Number
  * Next Prime Number

## Pattern Recognition

Whenever a problem says:

```text id="uwmjcx"
Find the next number satisfying a condition.
```

think:

```text id="hqnhjj"
Start from current + 1
Loop until condition becomes true
```

Typical pattern:

```cpp id="t7tfrx"
int x = current + 1;

while(!condition(x))
{
    x++;
}
```

This appears frequently in:

* Prime number problems
* Searching problems
* Simulation problems
* Brute force tasks