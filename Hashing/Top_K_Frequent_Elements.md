# LeetCode 347 – Top K Frequent Elements

## Difficulty
Medium

## Concepts
Hash Map, Priority Queue (Heap), Frequency Counting, Sorting

## Problem Summary

Given an integer array `nums` and an integer `k`, return the `k` most frequent elements.

The answer can be returned in any order.

## Key Observation

Before finding the most frequent elements, we first need to know how many times each element appears.

For example:

```text
nums = [1,1,1,2,2,3]
```

Frequency table:

```text
1 -> 3
2 -> 2
3 -> 1
```

The two most frequent elements are:

```text
1 and 2
```

## Approach

### Step 1: Count Frequencies

Use a hash map:

```cpp
unordered_map<int, int> freq;
```

Store:

```text
number -> frequency
```

### Step 2: Store in Max Heap

Push:

```text
{frequency, number}
```

into a priority queue.

Example:

```text
{3,1}
{2,2}
{1,3}
```

The heap automatically keeps the highest frequency on top.

### Step 3: Extract Top K Elements

Remove the top element `k` times and store the corresponding numbers in the answer.

## Example

### Input

```text
nums = [1,1,1,2,2,3]
k = 2
```

### Frequency Map

```text
1 -> 3
2 -> 2
3 -> 1
```

### Heap

```text
{3,1}
{2,2}
{1,3}
```

### Extract Top 2

```text
1
2
```

### Output

```text
[1,2]
```

## Accepted Solution

```cpp
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for(int num : nums){
            freq[num]++;
        }

        priority_queue<pair<int, int>> pq;

        for(auto& p : freq){
            pq.push({p.second, p.first});
        }

        vector<int> result;

        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
```

## Time Complexity

Let:

```text
n = size of nums
m = number of unique elements
```

### Frequency Counting

```text
O(n)
```

### Heap Construction

```text
O(m log m)
```

### Extracting K Elements

```text
O(k log m)
```

### Overall

```text
O(n + m log m)
```

## Space Complexity

```text
O(m)
```

For storing frequencies and heap elements.

## What I Learned

- How to count frequencies using a hash map.
- How to use a priority queue (max heap).
- How heaps help retrieve the largest elements efficiently.
- How frequency-based problems are commonly solved.

## Pattern Recognition

When a problem asks:

- Top K frequent elements
- Most frequent numbers
- Highest occurring values
- K largest frequencies

Think:

```cpp
unordered_map<int, int> freq;
```

to count occurrences and

```cpp
priority_queue<pair<int,int>>
```

to retrieve the largest frequencies.

This is one of the most common interview patterns involving hash maps and heaps.

## Alternative Approach (Optimal)

Use Bucket Sort:

```text
Frequency ranges from 1 to n.
Create buckets indexed by frequency.
Place each number into its frequency bucket.
Traverse buckets from highest frequency to lowest.
```

Complexity:

```text
O(n)
```

This satisfies the follow-up requirement of being better than:

```text
O(n log n)
```

and is considered the optimal solution.