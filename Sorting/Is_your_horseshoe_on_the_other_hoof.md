# Codeforces #228A – Is your horseshoe on the other hoof?

## Difficulty
A

## Concepts

- Arrays
- Sorting
- Counting Duplicates

## Problem Summary

Valera owns four horseshoes and wants all of them to have different colors.

You are given the colors of four horseshoes. Determine the minimum number of horseshoes he needs to buy so that all four horseshoes have distinct colors.

## Key Observation

If two or more horseshoes have the same color, Valera must buy new horseshoes to replace the duplicates.

After sorting the colors:

```text
1 3 3 7
```

Duplicate colors become adjacent:

```text
3 == 3
```

So we can simply count how many times a number is equal to the previous number.

The number of duplicates is exactly the number of new horseshoes needed.

## Approach

1. Store the four colors in an array.
2. Sort the array.
3. Traverse from index `1` to `3`.
4. If the current element equals the previous element:
   - Increment the duplicate counter.
5. Print the counter.

## Example

### Input

```text
7 7 7 7
```

### After Sorting

```text
7 7 7 7
```

### Duplicate Count

```text
7 == 7 → count = 1
7 == 7 → count = 2
7 == 7 → count = 3
```

### Output

```text
3
```

Valera must buy 3 new horseshoes.

## Accepted Solution

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[4];
    int count = 0;

    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }

    sort(a, a + 4);

    for(int i = 1; i < 4; i++){
        if(a[i] == a[i - 1]){
            count++;
        }
    }

    cout << count;

    return 0;
}
```

## Time Complexity

```text
O(4 log 4)
```

Since there are only four elements, this is effectively constant time.

## Space Complexity

```text
O(1)
```

No extra data structures are used.

## What I Learned

- How sorting helps group duplicate values together.
- How to count duplicates efficiently after sorting.
- A simple way to determine the number of unique elements in a small array.

## Pattern Recognition

When a problem asks:

- Count duplicates
- Find repeated values
- Determine how many unique elements exist

Think:

```text
Sort → Compare Adjacent Elements
```

Common pattern:

```cpp
sort(arr, arr + n);

for(int i = 1; i < n; i++){
    if(arr[i] == arr[i - 1]){
        // duplicate found
    }
}
```

This technique appears frequently in beginner implementation and sorting problems.

## Alternative Solution

Using a set:

```cpp
set<int> colors;

for(int i = 0; i < 4; i++){
    colors.insert(a[i]);
}

cout << 4 - colors.size();
```

The set automatically stores only unique values.

However, the sorting approach is simpler and does not require knowledge of STL sets.