# Two Sum

## Day

Day 3

## Difficulty

Easy

## Concepts

* Arrays
* Hash Map (unordered_map)
* One Pass Traversal

## Prerequisites

* Vector
* For Loop
* unordered_map
* find()

## Approach

For each number:

1. Calculate the number needed to reach the target.
2. Check if that number was seen before.
3. If yes, return both indices.
4. Otherwise store the current number and its index.

## Time Complexity

O(n)

## Space Complexity

O(n)

## What I Learned

* unordered_map stores key-value pairs.
* find() checks if a key exists.
* Hashing can reduce O(n²) solutions to O(n).
* The complement technique.
