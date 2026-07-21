# Codeforces #469A – I Wanna Be the Guy

## Difficulty

A

## Concepts

- Arrays
- Boolean Array
- Frequency Counting
- Implementation

## Problem Summary

There are `n` levels in a game.

Little X can complete `p` levels, and Little Y can complete `q` levels.

Determine whether, by cooperating, they can complete **every level from `1` to `n`**.

Print:

- `"I become the guy."` if all levels can be completed.
- `"Oh, my keyboard!"` otherwise.

## Key Observation

We only need to know whether each level has been completed by **at least one** of them.

A boolean array can be used to mark every level that either player can complete.

If every level from `1` to `n` is marked, they can finish the game together.

## Approach

1. Read `n`.
2. Create a boolean array initialized to `false`.
3. Read the `p` levels Little X can complete and mark them as `true`.
4. Read the `q` levels Little Y can complete and mark them as `true`.
5. Check every level from `1` to `n`.
6. If any level is not marked, print `"Oh, my keyboard!"`.
7. Otherwise, print `"I become the guy."`.

## Example

### Input

```text
4
3 1 2 3
2 2 4
```

### Processing

Marked levels:

```text
1 ✓
2 ✓
3 ✓
4 ✓
```

Every level is covered.

### Output

```text
I become the guy.
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int n, p, q;
    cin >> n;

    bool level[101] = {false};

    cin >> p;

    int x;
    for(int i = 0; i < p; i++){
        cin >> x;
        level[x] = true;
    }

    cin >> q;

    int y;
    for(int i = 0; i < q; i++){
        cin >> y;
        level[y] = true;
    }

    for(int i = 1; i <= n; i++){
        if(!level[i]){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}
```

## Time Complexity

```text
O(n)
```

Reading the levels and checking the boolean array both take linear time.

## Space Complexity

```text
O(1)
```

The boolean array has a fixed maximum size of `101`.

## What I Learned

- How to use a boolean array to track whether an element has appeared.
- How to combine information from multiple inputs using a single data structure.
- How to solve "cover all elements" problems efficiently.
- That checking presence is often easier than comparing arrays directly.

## Pattern Recognition

When a problem asks you to:

- Check whether all numbers from `1` to `n` are present
- Combine elements from multiple lists
- Track whether an item has appeared

Think:

```text
Boolean/Frequency Array
```

A common implementation pattern is:

```cpp
bool present[101] = {false};

present[value] = true;
```

Then verify:

```cpp
for(int i = 1; i <= n; i++){
    if(!present[i]){
        // Missing element
    }
}
```

## Alternative Thought Process

Instead of comparing Little X's and Little Y's arrays, focus on the levels themselves.

Mark every level that either player can complete:

```text
Little X → Mark levels

Little Y → Mark levels
```

Finally, check whether every level from `1` to `n` has been marked.

If yes, they can complete the game together; otherwise, at least one level is impossible to finish.