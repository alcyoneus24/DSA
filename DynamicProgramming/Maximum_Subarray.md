# LeetCode 53 – Maximum Subarray

## Difficulty
Medium

## Concepts
Arrays, Dynamic Programming, Kadane's Algorithm, Greedy

## Problem Summary

Given an integer array `nums`, find the contiguous subarray with the largest sum and return that sum.

A subarray must contain at least one element.

## Key Observation

Suppose we have:

```text
[-5, 4]
```

If our current sum is:

```text
-5
```

Should we keep it?

No.

Because:

```text
-5 + 4 = -1
```

is worse than simply starting a new subarray at:

```text
4
```

This leads to an important rule:

```text
If the running sum becomes negative,
discard it and start fresh.
```

This idea forms the basis of **Kadane's Algorithm**.

## Approach

Maintain two variables:

```text
currentSum
maxSum
```

For every element:

1. Add it to the current sum.
2. Update the maximum sum seen so far.
3. If the current sum becomes negative:
   - Reset it to zero.

This ensures that harmful negative prefixes are never carried forward.

## Example

### Input

```text
[-2,1,-3,4,-1,2,1,-5,4]
```

### Dry Run

| Element | Current Sum | Max Sum |
|----------|------------|----------|
| -2 | -2 → 0 | -2 |
| 1 | 1 | 1 |
| -3 | -2 → 0 | 1 |
| 4 | 4 | 4 |
| -1 | 3 | 4 |
| 2 | 5 | 5 |
| 1 | 6 | 6 |
| -5 | 1 | 6 |
| 4 | 5 | 6 |

Maximum sum:

```text
6
```

Subarray:

```text
[4,-1,2,1]
```

### Output

```text
6
```

## Accepted Solution

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currentSum = 0;
        int maxSum = nums[0];

        for(int num : nums){

            currentSum += num;

            maxSum = max(maxSum, currentSum);

            if(currentSum < 0){
                currentSum = 0;
            }
        }

        return maxSum;
    }
};
```

## Time Complexity

```text
O(n)
```

The array is traversed exactly once.

## Space Complexity

```text
O(1)
```

Only two extra variables are used.

## What I Learned

- How to work with contiguous subarrays.
- How to maintain a running sum efficiently.
- Why negative running sums should be discarded.
- How Kadane's Algorithm achieves an optimal O(n) solution.
- How greedy and dynamic programming ideas can combine in one algorithm.

## Pattern Recognition

When a problem asks:

- Maximum Subarray
- Largest Contiguous Sum
- Best Consecutive Segment
- Maximum Running Sum

Think:

```text
Kadane's Algorithm
```

Core idea:

```cpp
if(currentSum < 0){
    currentSum = 0;
}
```

A negative running sum can never help future subarrays.

## Alternative DP Interpretation

At each index, ask:

```text
Should I:

1. Start a new subarray here?

OR

2. Extend the previous subarray?
```

Mathematically:

```cpp
currentSum = max(nums[i], currentSum + nums[i]);
```

This is another common implementation of Kadane's Algorithm and is often used when learning Dynamic Programming.