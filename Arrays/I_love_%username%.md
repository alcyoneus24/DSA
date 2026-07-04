# Codeforces #155A – I_love_%username%

## Difficulty
A

## Concepts
Arrays, Simulation, Record Tracking, Greedy, Implementation

## Problem Summary

Vasya follows his favorite programmer's contest performances.

A performance is considered amazing if:

- The score is strictly greater than all previous scores (new best record).
- The score is strictly smaller than all previous scores (new worst record).

The first contest is never considered amazing.

Find the total number of amazing performances.

## Key Observation

Keep track of:

- Highest score seen so far (`best`)
- Lowest score seen so far (`worst`)

Whenever a score breaks either record, increase the counter and update the corresponding record.

## Approach

1. Read all contest scores.
2. Initialize:
   - `best = first score`
   - `worst = first score`
3. Traverse from the second contest onward.
4. If the current score is greater than `best`:
   - Increment count.
   - Update `best`.
5. Else if the current score is less than `worst`:
   - Increment count.
   - Update `worst`.
6. Print the count.

## Example

### Input

```text
5
100 50 200 150 200
```

### Analysis

```text
Contest 1: 100 → Initial record

Contest 2: 50
New worst → count = 1

Contest 3: 200
New best → count = 2

Contest 4: 150
No record broken

Contest 5: 200
Equal to best, not greater
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
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int best = arr[0];
    int worst = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > best){
            best = arr[i];
            count++;
        }
        else if(arr[i] < worst){
            worst = arr[i];
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

Single traversal of the contest scores.

## Space Complexity

```text
O(1)
```

Only a few variables are needed for tracking records.

## What I Learned

- How to track maximum and minimum values dynamically.
- How to count record-breaking events.
- The importance of updating state while traversing data.
- Using a single pass to solve a problem efficiently.

## Pattern Recognition

When a problem asks:

- Number of new highs
- Number of new lows
- Record-breaking events

Use running variables such as:

```cpp
best
worst
```

and update them while traversing the array.