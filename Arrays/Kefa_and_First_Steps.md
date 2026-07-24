# Codeforces #580A – Kefa and First Steps

## Difficulty

A

## Concepts

- Arrays
- Greedy
- Dynamic Counting
- Implementation

## Problem Summary

Kefa earns `ai` money on the `i-th` day.

Your task is to find the **length of the longest continuous non-decreasing subsegment** of the given sequence.

A subsegment is **non-decreasing** if every element is greater than or equal to the previous element.

Print the maximum length.

---

## Key Observation

The problem does **not** ask for the number of increasing pairs.

Instead, it asks for the **longest continuous sequence** where:

```text
arr[i] >= arr[i-1]
```

Whenever the current number is greater than or equal to the previous one, the current subsegment continues.

Otherwise, the subsegment breaks and a new one starts.

---

## Approach

Maintain two variables:

- `count` → Length of the current non-decreasing subsegment.
- `best` → Maximum length found so far.

Algorithm:

1. Initialize both `count` and `best` to `1`.
2. Traverse the array from left to right.
3. If the current element is greater than or equal to the previous element:
   - Increase `count`.
4. Otherwise:
   - Reset `count` to `1`.
5. Update `best` after every comparison.
6. Print `best`.

---

## Example

### Input

```text
6
2 2 1 3 4 1
```

### Dry Run

| Previous | Current | Condition | count | best |
|-----------|---------|-----------|------:|-----:|
| - | 2 | Start | 1 | 1 |
| 2 | 2 | 2 ≤ 2 ✔ | 2 | 2 |
| 2 | 1 | False | 1 | 2 |
| 1 | 3 | True | 2 | 2 |
| 3 | 4 | True | 3 | 3 |
| 4 | 1 | False | 1 | 3 |

Longest non-decreasing subsegment:

```text
1 3 4
```

Length:

```text
3
```

---

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int count = 1;
    int best = 1;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){

        if(arr[i] <= arr[i + 1]){
            count++;
            best = max(best, count);
        }
        else{
            count = 1;
        }
    }

    cout << best << endl;

    return 0;
}
```

---

## Time Complexity

```text
O(n)
```

The array is traversed only once.

---

## Space Complexity

```text
O(n)
```

The array is stored in memory.

> **Note:** If the input were processed one number at a time without storing the array, the space complexity could be reduced to **O(1)**.

---

## What I Learned

- How to find the longest continuous subarray satisfying a condition.
- The difference between counting valid comparisons and tracking the length of a segment.
- How to maintain a running answer using two variables (`count` and `best`).
- This is a common sliding/counting pattern used in array problems.

---

## Pattern Recognition

Whenever a problem asks for:

- Longest continuous segment
- Longest increasing/non-decreasing subarray
- Maximum consecutive elements satisfying a condition

Think of this pattern:

```cpp
current = 1;
best = 1;

for(...) {

    if(condition)
        current++;
    else
        current = 1;

    best = max(best, current);
}
```

This pattern appears frequently in Codeforces and LeetCode array problems.

---

## Alternative Thought Process

A brute-force solution would check every possible subsegment.

For each starting index:

- Extend the subsegment while it remains non-decreasing.
- Record its length.
- Repeat for every starting position.

This would take:

```text
O(n²)
```

which is too slow for:

```text
n ≤ 100000
```

Instead, notice that only the **current streak** matters.

Whenever the order breaks, simply reset the current length.

This reduces the complexity to:

```text
O(n)
```

---

## Edge Cases

### Single Element

```text
Input:
1
10

Output:
1
```

---

### All Increasing

```text
1 2 3 4 5

Answer:
5
```

---

### All Equal

```text
7 7 7 7

Answer:
4
```

Equal elements are allowed because the sequence is **non-decreasing**.

---

### Completely Decreasing

```text
5 4 3 2 1

Answer:
1
```

Each element forms its own subsegment.

---

## Key Takeaway

The solution does **not** count increasing pairs.

It continuously tracks:

- Current valid segment (`count`)
- Maximum segment found (`best`)

Whenever the sequence breaks:

```cpp
count = 1;
```

Whenever it continues:

```cpp
count++;
best = max(best, count);
```

This simple greedy counting approach solves the problem efficiently.