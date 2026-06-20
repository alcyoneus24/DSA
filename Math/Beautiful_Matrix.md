# Beautiful Matrix

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* 2D Traversal
* Coordinates
* Absolute Value
* Observation

## Pattern

* Find Position
* Calculate Distance

## Key Observation

The matrix is considered beautiful when the number `1` is located at:

```text
(3, 3)
```

the center of the 5×5 matrix.

The minimum number of moves required is the distance between the current position of `1` and the center.

## Formula

If the position of `1` is:

```text
(row, col)
```

then:

```cpp
abs(row - 3) + abs(col - 3)
```

gives the answer.

This is known as the Manhattan Distance.

## Approach

1. Read all 25 elements of the matrix.
2. Find the position of `1`.
3. Calculate:

```cpp
abs(row - 3) + abs(col - 3)
```

4. Print the result.

## Example

Input:

```text
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```

Position of `1`:

```text
(2, 5)
```

Distance from center:

```text
|2 - 3| + |5 - 3|
= 1 + 2
= 3
```

Output:

```text
3
```

## Time Complexity

```text
O(25)
```

Since the matrix size is fixed.

## Space Complexity

```text
O(1)
```

No extra data structures are required.

## What I Learned

* Traversing a 2D matrix.
* Finding the coordinates of an element.
* Using `abs()` to calculate distance.
* Understanding Manhattan Distance.
* Solving problems using observation rather than simulation.