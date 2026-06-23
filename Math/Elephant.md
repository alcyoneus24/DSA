# Elephant

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Mathematics
* Greedy
* Integer Division

## Pattern

* Take Maximum Step Repeatedly

## Key Observation

The elephant can move:

```text
1, 2, 3, 4, or 5 positions
```

To minimize the number of steps, the elephant should always take the largest possible step:

```text
5 positions
```

Therefore, we need to determine how many groups of 5 fit into the distance and whether there is any remaining distance.

## Approach

1. Read the destination coordinate `x`.
2. If `x` is divisible by 5:

   * Answer = `x / 5`
3. Otherwise:

   * Answer = `x / 5 + 1`
4. Print the result.

## Example 1

Input:

```text
5
```

Distance:

```text
5
```

One move of length 5:

```text
5
```

Output:

```text
1
```

## Example 2

Input:

```text
12
```

Maximum 5-step moves:

```text
12 / 5 = 2
```

Distance covered:

```text
10
```

Remaining distance:

```text
2
```

One additional move is required.

Output:

```text
3
```

## Time Complexity

```text
O(1)
```

Only a few arithmetic operations are performed.

## Space Complexity

```text
O(1)
```

No extra memory is required.

## What I Learned

* Using mathematical observations instead of simulation.
* Applying a greedy strategy.
* Using integer division.
* Breaking a problem into complete groups and a remainder.

## Formula

If:

```cpp
x % 5 == 0
```

then:

```cpp
answer = x / 5;
```

otherwise:

```cpp
answer = x / 5 + 1;
```

## Greedy Idea

```text
Distance x
      ↓
Take as many 5-step moves as possible
      ↓
Anything left?
   ↓         ↓
 No         Yes
 ↓           ↓
Done    One extra move
      ↓
    Answer
```