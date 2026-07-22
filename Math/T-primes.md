# Codeforces #230B – T-primes

## Difficulty

B

## Concepts

- Mathematics
- Number Theory
- Prime Numbers
- Perfect Squares
- Square Root
- Implementation

## Problem Summary

A positive integer is called a **T-prime** if it has **exactly three distinct positive divisors**.

Given `n` numbers, determine for each number whether it is a T-prime.

Print:

- `YES` if the number is a T-prime.
- `NO` otherwise.

## Key Observation

A number has exactly **three divisors** only when it is the **square of a prime number**.

For example:

```text
4  = 2² → Divisors: 1, 2, 4

9  = 3² → Divisors: 1, 3, 9

25 = 5² → Divisors: 1, 5, 25
```

Therefore, a number is a T-prime if:

1. It is a **perfect square**.
2. Its square root is **prime**.

## Approach

For each number:

1. Compute its square root.
2. Check whether it is a perfect square.
3. If it is not a perfect square, print `NO`.
4. Otherwise, check whether the square root is prime.
5. If it is prime, print `YES`; otherwise, print `NO`.

## Example

### Input

```text
3
4 5 6
```

### Processing

```text
4

√4 = 2

2 is prime

→ YES
```

```text
5

Not a perfect square

→ NO
```

```text
6

Not a perfect square

→ NO
```

### Output

```text
YES
NO
NO
```

## Accepted Solution

```cpp
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(long long n){

    if(n < 2)
        return false;

    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

int main(){

    int n;
    cin >> n;

    while(n--){

        long long x;
        cin >> x;

        long long root = sqrt(x);

        if(root * root == x && isPrime(root))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
```

## Time Complexity

```text
O(n × √√x)
```

For each number:

- Finding the square root takes constant time.
- Checking whether the square root is prime takes up to `O(√root)`.

Since:

```text
root ≤ 10⁶
```

the solution easily fits within the limits.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

- A number with exactly three divisors must be the square of a prime.
- How to use `sqrt()` to test for perfect squares.
- How to write a primality checking function.
- How mathematical observations can greatly simplify a problem.

## Pattern Recognition

When a problem involves:

- Prime numbers
- Number of divisors
- Perfect squares
- Square roots

Think:

```text
Number Theory
```

A common pattern is:

```cpp
long long root = sqrt(x);

if(root * root == x && isPrime(root))
    cout << "YES";
else
    cout << "NO";
```

## Alternative Thought Process

Instead of counting every divisor of a number:

```text
1
2
4
...
```

look for a mathematical property.

If a number has exactly **three divisors**, it must be:

```text
Prime × Prime
```

which is simply:

```text
Prime²
```

So the problem becomes:

```text
Perfect Square?

↓

Square Root is Prime?

↓

YES

Otherwise

↓

NO
```

This observation reduces the problem from divisor counting to checking two simple conditions.