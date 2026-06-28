# Magnets

## Platform

Codeforces

## Difficulty

A

## Concepts

* Strings
* Simulation
* Counting Groups

## Problem Summary

Mike arranges magnets in a row.

Each magnet can be:

```text
10
```

or

```text
01
```

Magnets with the same orientation belong to the same group.

Whenever the orientation changes from one magnet to the next, a new group is formed.

We need to determine the total number of groups.

---

## Key Observation

A new group starts whenever the current magnet is different from the previous magnet.

Example:

```text
10
10
10
01
10
10
```

Groups:

```text
10 10 10 | 01 | 10 10
```

Number of groups:

```text
3
```

---

## Approach

### Step 1

Read the number of magnets:

```cpp
cin >> n;
```

### Step 2

Read the first magnet and assume it forms the first group.

```cpp
cin >> prev;
int groups = 1;
```

### Step 3

Process the remaining magnets one by one.

```cpp
for(int i = 1; i < n; i++)
```

### Step 4

If the current magnet differs from the previous one, increment the group count.

```cpp
if(curr != prev)
    groups++;
```

### Step 5

Update the previous magnet.

```cpp
prev = curr;
```

### Step 6

Print the number of groups.

---

## Example

Input:

```text
6
10
10
10
01
10
10
```

Processing:

```text
10 -> start group 1
10 -> same group
10 -> same group
01 -> new group (2)
10 -> new group (3)
10 -> same group
```

Output:

```text
3
```

---

## Accepted Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    string prev, curr;

    cin >> n;
    cin >> prev;

    int groups = 1;

    for(int i = 1; i < n; i++) {
        cin >> curr;

        if(curr != prev) {
            groups++;
        }

        prev = curr;
    }

    cout << groups << endl;

    return 0;
}
```

---

## Time Complexity

```text
O(n)
```

Each magnet is processed exactly once.

---

## Space Complexity

```text
O(1)
```

Only two strings and a counter are used.

---

## What I Learned

* Comparing strings using `!=`.
* Tracking changes between consecutive elements.
* Counting groups in a sequence.
* Initializing the answer with the first group's count.
* Using a previous/current element pattern in competitive programming.

## Pattern Recognition

Whenever a problem asks:

```text
How many groups?
How many segments?
How many times does a value change?
```

Think about comparing the current element with the previous one and counting transitions.