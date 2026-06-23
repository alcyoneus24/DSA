# Queue at the School

## Platform

Codeforces

## Difficulty

Easy

## Concepts

- Strings
- Simulation
- Nested Loops
- Adjacent Swapping

## Pattern

- Simulate Process Step by Step

## Key Observation

Every second:

```text
BG → GB
```

A boy standing immediately before a girl allows the girl to move ahead.

All such swaps happen simultaneously during a second.

To simulate this correctly, after performing a swap, we must skip the next position because the boy who just moved cannot move again during the same second.

## Approach

1. Read `n`, `t`, and the queue string.
2. Repeat the process for `t` seconds.
3. Traverse the queue from left to right.
4. Whenever `"BG"` is found:

   - Swap the characters.
   - Move the index forward by one extra position.

5. Print the final queue.

## Example

Input:

```text
5 1
BGGBG
```

Initial queue:

```text
B G G B G
```

After first swap:

```text
G B G B G
```

After second swap:

```text
G B G G B
```

Output:

```text
GBGGB
```

## Time Complexity

```text
O(n × t)
```

For each second, we may scan the entire queue.

## Space Complexity

```text
O(1)
```

Only the original string is modified.

## What I Learned

- Simulating a process over multiple time steps.
- Traversing and modifying strings.
- Using `swap()` for adjacent elements.
- Handling simultaneous operations correctly.
- Understanding why index skipping is sometimes necessary.

## Functions and Concepts Used

### swap()

```cpp
swap(s[i], s[i + 1]);
```

Exchanges two adjacent characters.

### Nested Loops

```cpp
for each second
    for each position
```

Used to simulate the queue transformation over time.

### Index Skipping

```cpp
i++;
```

Prevents the same boy from moving twice during a single second.

## Solution Idea

```text
Repeat t Times
       ↓
Traverse Queue
       ↓
Found "BG" ?
    ↓        ↓
   Yes       No
    ↓
Swap
    ↓
Skip Next Position
    ↓
Continue
       ↓
Print Final Queue
```
