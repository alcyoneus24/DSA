# Roman To Integer

## Day
Day 4

## Difficulty
Easy

## Concepts
- Strings
- map<char, int>
- String Traversal
- Greedy Logic
- Comparing Adjacent Elements

## Prerequisites
- String Indexing
- For Loops
- Maps

## Approach

1. Store Roman symbols and their values in a map.
2. Traverse the string from left to right.
3. Compare the current value with the next value.
4. If current < next:
   - subtract current
5. Else:
   - add current
6. Add the last Roman numeral value.

## Time Complexity
O(n)

## Space Complexity
O(1)

## What I Learned
- map<char, int>
- Character lookup
- Adjacent element comparison
- Greedy strategy