# Codeforces #705A – Hulk

## Difficulty

A

## Concepts

- Strings
- Loops
- Conditional Statements
- Implementation

## Problem Summary

Dr. Bruce Banner has `n` layers of feelings.

The feelings alternate between:

- **hate** (odd layers)
- **love** (even layers)

Each layer is connected using the word **"that"**, except the last one, which ends with **"it"**.

Print the complete sentence representing Hulk's feelings.

## Key Observation

The pattern alternates between **hate** and **love**.

- Odd position → `"I hate"`
- Even position → `"I love"`

Every phrase except the last ends with:

```text
that
```

The last phrase ends with:

```text
it
```

## Approach

1. Read the value of `n`.
2. Loop from `1` to `n`.
3. If the current position is odd, print `"I hate "`.
4. Otherwise, print `"I love "`.
5. If it is the last position, print `"it"`.
6. Otherwise, print `"that "`.

## Example

### Input

```text
4
```

### Processing

```text
1 → I hate that
2 → I love that
3 → I hate that
4 → I love it
```

### Output

```text
I hate that I love that I hate that I love it
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        if(i % 2 != 0)
            cout << "I hate ";
        else
            cout << "I love ";

        if(i == n)
            cout << "it";
        else
            cout << "that ";
    }

    return 0;
}
```

## Time Complexity

```text
O(n)
```

The loop runs exactly `n` times.

## Space Complexity

```text
O(1)
```

No extra data structures are used.

## What I Learned

- How to generate patterned output using loops.
- How to alternate between two strings using the modulo operator.
- How to handle the last iteration differently from the others.
- How simple string construction problems often rely on identifying repeating patterns.

## Pattern Recognition

When a problem asks you to:

- Print a repeating sequence
- Alternate between two values
- Handle the last element differently

Think:

```text
Pattern Printing
```

A common implementation pattern is:

```cpp
for(int i = 1; i <= n; i++) {

    if(i % 2 == 1)
        // First pattern
    else
        // Second pattern

    if(i == n)
        // Ending
    else
        // Separator
}
```

## Alternative Thought Process

Instead of writing separate cases for every value of `n`, notice the repeating pattern:

```text
Odd  → hate
Even → love
```

and

```text
Every phrase except the last ends with "that".

The final phrase ends with "it".
```

Using these two observations, the sentence can be built efficiently with a single loop.