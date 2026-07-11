# LeetCode 344 – Reverse String

## Difficulty
Easy

## Concepts
Two Pointers, Strings, Arrays, In-Place Modification

## Problem Summary

Given an array of characters `s`, reverse the array in-place.

You must:

- Modify the original array.
- Use only `O(1)` extra memory.
- Not create another array for the answer.

## Key Observation

To reverse a string, we can swap:

```text
First ↔ Last
Second ↔ Second Last
...
```

For example:

```text
h e l l o
↑       ↑
```

Swap:

```text
o e l l h
```

Move both pointers inward:

```text
o l l e h
```

The string is now reversed.

## Approach

1. Initialize two pointers:
   - `start = 0`
   - `end = s.size() - 1`
2. While `start < end`:
   - Swap `s[start]` and `s[end]`
   - Increment `start`
   - Decrement `end`
3. The array is reversed in-place.

## Example

### Input

```text
["h","e","l","l","o"]
```

### Steps

```text
h e l l o
↑       ↑

Swap

o e l l h
  ↑   ↑

Swap

o l l e h
```

### Output

```text
["o","l","l","e","h"]
```

## Accepted Solution

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};
```

## Time Complexity

```text
O(n)
```

Each character is visited at most once.

## Space Complexity

```text
O(1)
```

The reversal is performed in-place without using extra arrays.

## What I Learned

- How the two-pointer technique works.
- How to reverse data without creating another array.
- How to modify vectors in-place.
- Why in-place algorithms save memory.

## Pattern Recognition

When a problem asks:

- Reverse an array
- Reverse a string
- Reverse a vector
- Reverse a portion of an array

Think:

```cpp
int start = 0;
int end = n - 1;

while(start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
}
```

This is one of the most common two-pointer patterns and appears frequently in coding interviews and DSA problems.

## Alternative Approach

Using a built-in function:

```cpp
reverse(s.begin(), s.end());
```

However, interviewers often expect the two-pointer solution because it demonstrates understanding of in-place reversal.