# Presents

## Platform

Codeforces

## Difficulty

A

## Concepts

* Arrays
* Inverse Mapping
* Indexing

## Problem Summary

There are `n` friends numbered from `1` to `n`.

Friend `i` gives a gift to friend `p[i]`.

For every friend, we need to determine:

```text
Who gave a gift to this friend?
```

and print the answer for all friends from `1` to `n`.

---

## Key Observation

The input tells us:

```text
giver → receiver
```

But the output requires:

```text
receiver → giver
```

So we need to reverse the mapping.

---

## Example

Input:

```text
4
2 3 4 1
```

Meaning:

```text
1 → 2
2 → 3
3 → 4
4 → 1
```

We need to find:

```text
Who gave gift to 1? → 4
Who gave gift to 2? → 1
Who gave gift to 3? → 2
Who gave gift to 4? → 3
```

Output:

```text
4 1 2 3
```

---

## Approach

### Step 1

Create an answer array.

```cpp
vector<int> ans(n + 1);
```

The extra position is used because friend numbering starts from `1`.

---

### Step 2

Read each friend's receiver.

```cpp
for(int i = 1; i <= n; i++)
{
    cin >> p;
}
```

Here:

```text
i = giver
p = receiver
```

---

### Step 3

Store the reverse relationship.

```cpp
ans[p] = i;
```

Meaning:

```text
Friend i gave a gift to friend p
```

Therefore:

```text
The giver of p is i
```

---

## Dry Run

Input:

```text
4
2 3 4 1
```

Processing:

### i = 1

```text
p = 2
ans[2] = 1
```

### i = 2

```text
p = 3
ans[3] = 2
```

### i = 3

```text
p = 4
ans[4] = 3
```

### i = 4

```text
p = 1
ans[1] = 4
```

Final array:

```text
Index : 1 2 3 4
Value : 4 1 2 3
```

Output:

```text
4 1 2 3
```

---

## Accepted Solution

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ans(n + 1);

    for(int i = 1; i <= n; i++) {
        int p;
        cin >> p;

        ans[p] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i];

        if(i != n)
            cout << " ";
    }

    return 0;
}
```

---

## Alternative Approach

Use two arrays:

```cpp
p[i] = receiver
```

Then search for each friend:

```cpp
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= n; j++)
    {
        if(p[j] == i)
            cout << j;
    }
}
```

But this takes:

```text
O(n²)
```

The inverse-mapping approach is better.

---

## Time Complexity

```text
O(n)
```

Each friend is processed exactly once.

---

## Space Complexity

```text
O(n)
```

For the answer array.

---

## What I Learned

* Reversing a mapping.
* Using array indices as information.
* Working with 1-based indexing.
* Building inverse relationships efficiently.

## Pattern Recognition

Whenever a problem gives:

```text
A → B
```

and asks for:

```text
For each B, find A
```

think about:

```text
Inverse Mapping
```

Typical implementation:

```cpp
inverse[B] = A;
```

This pattern appears frequently in:

* Permutations
* Gift exchange problems
* Ranking problems
* Position/value transformations

---

## Visual Representation

Input:

```text
1 → 2
2 → 3
3 → 4
4 → 1
```

Reverse Mapping:

```text
2 ← 1
3 ← 2
4 ← 3
1 ← 4
```

Output:

```text
4 1 2 3
```