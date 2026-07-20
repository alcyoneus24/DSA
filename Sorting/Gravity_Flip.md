# Codeforces #405A – Gravity Flip

## Difficulty

A

## Concepts

- Arrays
- Sorting
- Greedy Observation
- Implementation

## Problem Summary

You are given the heights of `n` columns of cubes.

Initially, gravity pulls the cubes downward. After gravity flips to the right, the cubes slide and rearrange themselves.

Determine the heights of the columns after the gravity flip.

## Key Observation

When gravity pulls to the right, shorter columns end up on the left and taller columns on the right.

This means the final arrangement is simply the column heights sorted in **non-decreasing order**.

No simulation of cube movement is required.

## Approach

1. Read the number of columns.
2. Store the heights in an array.
3. Sort the array in ascending order.
4. Print the sorted array.

## Example

### Input

```text
4
3 2 1 2
```

### Processing

Original heights:

```text
3 2 1 2
```

After sorting:

```text
1 2 2 3
```

### Output

```text
1 2 2 3
```

## Accepted Solution

```cpp
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
```

## Time Complexity

```text
O(n log n)
```

Sorting the array dominates the running time.

## Space Complexity

```text
O(1)
```

The sorting is performed in-place (ignoring the implementation details of `sort()`).

## What I Learned

- How to recognize when a problem can be simplified using sorting.
- That not every problem requires simulation, even if the statement describes a physical process.
- How to use the C++ STL `sort()` function.
- How to print an array after processing.

## Pattern Recognition

When a problem asks you to:

- Rearrange elements
- Find the final order after movement
- Order values from smallest to largest

Think:

```text
Sorting
```

A common implementation pattern is:

```cpp
sort(arr, arr + n);
```

or

```cpp
sort(v.begin(), v.end());
```

depending on whether you are using arrays or vectors.

## Alternative Thought Process

Instead of imagining every cube sliding to the right, observe the final arrangement.

The exact movement of cubes doesn't matter.

Only the order of the column heights changes:

```text
3 2 1 2

↓

1 2 2 3
```

Thus, sorting directly produces the final answer.