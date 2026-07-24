# Codeforces #1873C – Target Practice

## Difficulty

C

## Concepts

- 2D Arrays
- Implementation
- Matrix Traversal
- Geometry
- Simulation

## Problem Summary

A **10 × 10** target consists of **5 rings**.

Each ring has a different score:

```text
Outer Ring   → 1 point
Second Ring  → 2 points
Third Ring   → 3 points
Fourth Ring  → 4 points
Center Ring  → 5 points
```

Each `'X'` represents an arrow.

Your task is to calculate the total score of all arrows.

---

## Key Observation

Instead of drawing the rings manually, notice that a cell's score depends on its **minimum distance from the four borders**.

For every cell `(i, j)`:

```text
Top Distance    = i

Bottom Distance = 9 - i

Left Distance   = j

Right Distance  = 9 - j
```

The smallest of these four distances tells us which ring the cell belongs to.

Finally,

```text
Score = Minimum Distance + 1
```

---

## Ring Layout

The target can be visualized as:

```text
1 1 1 1 1 1 1 1 1 1
1 2 2 2 2 2 2 2 2 1
1 2 3 3 3 3 3 3 2 1
1 2 3 4 4 4 4 3 2 1
1 2 3 4 5 5 4 3 2 1
1 2 3 4 5 5 4 3 2 1
1 2 3 4 4 4 4 3 2 1
1 2 3 3 3 3 3 3 2 1
1 2 2 2 2 2 2 2 2 1
1 1 1 1 1 1 1 1 1 1
```

Instead of storing this matrix, we calculate the ring using the distance formula.

---

## Approach

For every test case:

1. Read the 10 × 10 grid.
2. Traverse every cell.
3. If the cell contains `'X'`:
   - Compute its distance from all four borders.
   - Find the minimum distance.
   - Add `(minimum distance + 1)` to the answer.
4. Print the total score.

---

## Example

Suppose an arrow is at:

```text
(4,5)
```

Distances:

```text
Top = 4

Bottom = 5

Left = 5

Right = 4
```

Minimum distance:

```text
4
```

Score:

```text
4 + 1 = 5
```

This is the center ring.

---

Another example:

```text
Arrow at (2,7)
```

Distances:

```text
Top = 2

Bottom = 7

Left = 7

Right = 2
```

Minimum:

```text
2
```

Score:

```text
3
```

---

## Accepted Solution

```cpp
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        char grid[10][10];
        int score = 0;

        // Read the target
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> grid[i][j];
            }
        }

        // Calculate score
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){

                if(grid[i][j] == 'X'){

                    int top = i;
                    int bottom = 9 - i;
                    int left = j;
                    int right = 9 - j;

                    int ring = min(min(top, bottom), min(left, right));

                    score += ring + 1;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}
```

---

## Time Complexity

```text
O(10 × 10)
```

Each test case processes exactly **100 cells**.

Since the grid size is fixed,

```text
O(100) ≈ O(1)
```

---

## Space Complexity

```text
O(1)
```

The grid size is always **10 × 10**, so the memory usage remains constant.

---

## What I Learned

- How to traverse a 2D array.
- How to calculate the minimum of multiple values.
- How geometry can simplify a matrix problem.
- Some patterns can be computed mathematically instead of storing them.

---

## Pattern Recognition

Whenever a problem involves:

- Grids
- Rings
- Layers
- Distance from borders
- Matrix traversal

Think about:

```text
Distance from the nearest boundary
```

Many matrix problems use:

```cpp
min(top, bottom, left, right)
```

to determine the layer of a cell.

---

## Alternative Thought Process

One approach is to manually create another 10 × 10 matrix containing the score of every cell.

Example:

```text
1 1 1 1 1 ...
1 2 2 2 2 ...
...
```

Then, whenever an `'X'` is found, simply add the value from the score matrix.

Although this works, it requires extra memory and hardcoding the target.

A better approach is to compute the score directly using the cell's distance from the four borders.

---

## Edge Cases

### No arrows

```text
..........
..........
..........
..........
..........
..........
..........
..........
..........
..........
```

Output:

```text
0
```

---

### One arrow at the center

```text
....X.....
```

Score:

```text
5
```

---

### Entire target filled

Every cell contains `'X'`.

The answer is:

```text
220
```

(as shown in the sample).

---

## Key Takeaway

The ring of a cell is determined by:

```text
Minimum Distance from the Border
```

Compute:

```cpp
top = i;
bottom = 9 - i;
left = j;
right = 9 - j;
```

Then:

```cpp
ring = min(min(top, bottom), min(left, right));
```

Finally,

```cpp
score += ring + 1;
```

This simple observation eliminates the need to manually define the five rings.