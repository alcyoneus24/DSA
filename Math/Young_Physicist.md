# Codeforces #69A – Young Physicist

## Difficulty
A

## Concepts
Vectors, Simulation, Mathematics, Accumulation, Implementation

## Problem Summary

A body in space is affected by several force vectors.

Each force vector has three components:

```text
(x, y, z)
```

The body is in equilibrium only if the resultant force is:

```text
(0, 0, 0)
```

Determine whether the given set of forces keeps the body in equilibrium.

## Key Observation

For the body to remain at rest:

```text
Sum of all x-components = 0
Sum of all y-components = 0
Sum of all z-components = 0
```

If all three sums are zero, the resultant vector is:

```text
(0, 0, 0)
```

and the answer is `YES`.

Otherwise, the answer is `NO`.

## Approach

1. Read the number of vectors `n`.
2. Maintain three running sums:
   - `xsum`
   - `ysum`
   - `zsum`
3. For each vector:
   - Add its x-coordinate to `xsum`
   - Add its y-coordinate to `ysum`
   - Add its z-coordinate to `zsum`
4. After processing all vectors:
   - If all sums are zero, print `YES`
   - Otherwise, print `NO`

## Example

### Input

```text
3
3 -1 7
-5 2 -4
2 -1 -3
```

### Calculation

```text
x:  3 + (-5) + 2  = 0
y: -1 + 2 + (-1) = 0
z:  7 + (-4) + (-3) = 0
```

Resultant vector:

```text
(0, 0, 0)
```

### Output

```text
YES
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x, y, z;
    int xsum = 0, ysum = 0, zsum = 0;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;

        xsum += x;
        ysum += y;
        zsum += z;
    }

    if(xsum == 0 && ysum == 0 && zsum == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
```

## Time Complexity

```text
O(n)
```

Each vector is processed exactly once.

## Space Complexity

```text
O(1)
```

Only a few integer variables are used.

## What I Learned

- How to work with 3D vectors.
- How to maintain running sums.
- A body is in equilibrium when the net force equals zero.
- Many problems can be solved by accumulating values and checking a final condition.

## Pattern Recognition

When a problem involves:

- Multiple vectors
- Net force
- Total displacement
- Balance conditions

Think:

```cpp
sum += value;
```

and check the final accumulated result.

This pattern is common in physics, mathematics, and simulation problems.