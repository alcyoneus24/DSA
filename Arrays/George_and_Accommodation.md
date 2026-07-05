# Codeforces #467A – George and Accommodation

## Difficulty
A

## Concepts
Loops, Conditional Statements, Counting, Implementation

## Problem Summary

George and Alex want to move into the same dorm room.

For each room:

- `p` = number of people currently living in the room
- `q` = room capacity

A room is suitable if it has space for both George and Alex, meaning at least 2 free spots.

Find the number of rooms where they can move in together.

## Key Observation

The number of free spots in a room is:

```text
q - p
```

If:

```text
q - p >= 2
```

then both George and Alex can move into that room.

## Approach

1. Read the number of rooms `n`.
2. For each room:
   - Read `p` and `q`.
   - Check if `q - p >= 2`.
   - If true, increase the counter.
3. Print the final count.

## Example

### Input

```text
3
1 10
0 10
10 10
```

### Analysis

```text
Room 1:
10 - 1 = 9 free spots ✓

Room 2:
10 - 0 = 10 free spots ✓

Room 3:
10 - 10 = 0 free spots ✗
```

Suitable rooms:

```text
2
```

### Output

```text
2
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p, q;
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> p >> q;

        if(q - p >= 2){
            count++;
        }
    }

    cout << count;

    return 0;
}
```

## Time Complexity

```text
O(n)
```

We check each room exactly once.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

- How to process multiple test entries using a loop.
- How to count occurrences that satisfy a condition.
- Simple arithmetic can often solve implementation problems.
- Not every problem requires storing input in an array.

## Pattern Recognition

When a problem asks:

- How many items satisfy a condition?
- Count valid rooms, students, values, etc.

Use a counter:

```cpp
int count = 0;
```

and increment it whenever the required condition is met.

This pattern appears frequently in beginner Codeforces implementation problems.