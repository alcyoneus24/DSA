# Nearly Lucky Number

## Platform

Codeforces

## Difficulty

A

## Concepts

* Strings
* Digit Counting
* Number Manipulation

## Problem Summary

A lucky number contains only the digits:

```text
4 and 7
```

Examples:

```text
4
7
47
74
4477
```

are lucky numbers.

A number is called **nearly lucky** if the number of lucky digits (`4` and `7`) in it is itself a lucky number.

We need to determine whether the given number is nearly lucky.

---

## Key Observation

We do **not** need to check whether the original number is lucky.

Instead:

1. Count how many digits in the number are `4` or `7`.
2. Check whether this count is a lucky number.

---

## Example 1

Input:

```text
40047
```

Lucky digits:

```text
4 0 0 4 7
^     ^ ^
```

Count:

```text
3
```

Is `3` a lucky number?

```text
No
```

Output:

```text
NO
```

---

## Example 2

Input:

```text
7747774
```

Lucky digits:

```text
7 7 4 7 7 7 4
```

Count:

```text
7
```

Is `7` a lucky number?

```text
Yes
```

Output:

```text
YES
```

---


## Approach

### Step 1

Read the number as a string.

```cpp
string n;
cin >> n;
```

Using a string makes digit processing easier.

---

### Step 2

Count the lucky digits.

```cpp
for(char c : n)
{
    if(c == '4' || c == '7')
        count++;
}
```

---

### Step 3

If the count is zero, the answer is NO.

```cpp
if(count == 0)
```

because `0` is not a lucky number.

---

### Step 4

Check whether every digit of the count is either `4` or `7`.

Example:

```text
count = 47
```

Digits:

```text
4 ✓
7 ✓
```

Therefore:

```text
YES
```

---

## Accepted Solution

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            count++;
        }
    }

    if (count == 0) {
        cout << "NO" << endl;
        return 0;
    }

    while (count > 0) {
        int digit = count % 10;

        if (digit != 4 && digit != 7) {
            cout << "NO" << endl;
            return 0;
        }

        count /= 10;
    }

    cout << "YES" << endl;

    return 0;
}
```

---

## Time Complexity

```text
O(n)
```

where `n` is the number of digits in the input.

Maximum:

```text
18 digits
```

so the solution is extremely fast.

---

## Space Complexity

```text
O(1)
```

Only a few variables are used.

---

## What I Learned

* Reading large numbers as strings.
* Counting specific digits in a number.
* Checking whether a number itself satisfies a digit-based property.
* Using `% 10` and `/ 10` to process digits of an integer.
* Understanding the difference between:

  * Lucky Number
  * Nearly Lucky Number

## Pattern Recognition

When a problem says:

```text
Count something and then check a property of the count.
```

think of a two-step process:

```text
Input
  ↓
Count occurrences
  ↓
Validate the count
  ↓
Answer
```