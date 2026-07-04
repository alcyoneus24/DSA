# Codeforces #144A – Arrival of the General

## Difficulty
A

## Concepts
Arrays, Greedy, Simulation, Index Tracking, Implementation

## Problem Summary

A general wants the tallest soldier to stand at the beginning of the line and the shortest soldier to stand at the end.

In one second, the colonel can swap two neighboring soldiers.

Find the minimum number of swaps needed to achieve this arrangement.

## Key Observation

To minimize swaps:

- Move the **leftmost tallest soldier** to the front.
- Move the **rightmost shortest soldier** to the end.

The rest of the soldiers do not matter.

## Approach

1. Find the index of the leftmost maximum height.
2. Find the index of the rightmost minimum height.
3. Swaps needed to bring the maximum to the front:

```text
maxIndex
```

4. Swaps needed to bring the minimum to the end:

```text
(n - 1 - minIndex)
```

5. Add both values.

6. If the maximum is originally to the right of the minimum, subtract one because moving the maximum left shifts the minimum one position right.

## Example

### Input

```text
4
33 44 11 22
```

### Analysis

```text
Maximum = 44 at index 1
Minimum = 11 at index 2

Moves for maximum = 1
Moves for minimum = 1

Total = 2
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

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxHeight = arr[0];
    int minHeight = arr[0];

    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxHeight){
            maxHeight = arr[i];
            maxIndex = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] <= minHeight){
            minHeight = arr[i];
            minIndex = i;
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);

    if(maxIndex > minIndex){
        moves--;
    }

    cout << moves;

    return 0;
}
```

## Time Complexity

```text
O(n)
```

Two linear traversals of the array.

## Space Complexity

```text
O(1)
```

Only a few extra variables are used.

## What I Learned

- How to track indices while traversing an array.
- Difference between leftmost maximum and rightmost minimum.
- Sometimes swaps do not need to be simulated.
- Greedy observations can greatly simplify a problem.

## Pattern Recognition

When a problem asks for the minimum adjacent swaps to move specific elements to target positions:

1. Find the required elements.
2. Calculate their distance from the target positions.
3. Adjust for overlap if one movement affects the other.

This pattern appears frequently in array manipulation and greedy problems.