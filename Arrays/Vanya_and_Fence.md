# Codeforces #677A – Vanya and Fence

## Difficulty

A

## Concepts

- Arrays
- Counting
- Implementation
- Simulation

## Problem Summary

Vanya and his friends are walking along a fence of height `h`.

For each friend:

- If their height is less than or equal to `h`, they occupy width `1`.
- If their height is greater than `h`, they must bend down and occupy width `2`.

Find the minimum total width of the road required for all friends to walk in a single row.

## Key Observation

Each friend contributes independently to the total width.

```text
Height ≤ h → Width = 1
Height > h → Width = 2
```

Therefore, we simply calculate the width contributed by every friend and add them together.

## Approach

1. Read the number of friends `n` and fence height `h`.
2. Read the heights of all friends.
3. Traverse the array:
   - If a friend's height is greater than `h`, add `2` to the width.
   - Otherwise, add `1` to the width.
4. Print the total width.

## Example

### Input

```text
3 7
4 5 14
```

### Processing

```text
4 ≤ 7  → +1
5 ≤ 7  → +1
14 > 7 → +2
```

Total width:

```text
1 + 1 + 2 = 4
```

### Output

```text
4
```

## Accepted Solution

```cpp
#include <iostream>
using namespace std;

int main(){
    int n, h;
    int width = 0;

    cin >> n >> h;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < n; j++){

        if(arr[j] > h){
            width = width + 2;
        }
        else{
            width = width + 1;
        }
    }

    cout << width;

    return 0;
}
```

## Time Complexity

```text
O(n)
```

Each friend's height is checked exactly once.

## Space Complexity

```text
O(n)
```

The heights are stored in an array.

## What I Learned

- How to process an array element by element.
- How to accumulate a result using a counter variable.
- How to translate a problem statement directly into conditions.
- Basic implementation of counting problems.

## Pattern Recognition

When a problem asks:

- Calculate a total based on individual conditions
- Count contributions from each element
- Traverse an array and accumulate a result

Think:

```text
Array Traversal + Counting
```

Common pattern:

```cpp
for(int i = 0; i < n; i++){

    if(condition){
        answer += value1;
    }
    else{
        answer += value2;
    }
}
```

This pattern appears very frequently in beginner Codeforces implementation problems.

## Alternative Optimization

You don't actually need to store all heights.

You can process them while reading input:

```cpp
int x, width = 0;

for(int i = 0; i < n; i++){
    cin >> x;

    if(x > h)
        width += 2;
    else
        width += 1;
}
```

This reduces the space complexity to:

```text
O(1)
```

while producing the same result.