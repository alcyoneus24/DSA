# Bit++

## Platform

Codeforces

## Difficulty

Easy

## Concepts

* Strings
* Simulation
* Conditional Statements

## Pattern

* Process Commands
* Update Variable

## Key Observation

There is only one variable:

```text
x = 0
```

Each statement either:

```text
++ → increase x by 1
-- → decrease x by 1
```

The position of `X` does not matter.

Examples:

```text
++X
X++
```

Both increase `x`.

Examples:

```text
--X
X--
```

Both decrease `x`.

The middle character determines the operation:

```text
++X → s[1] = '+'
X++ → s[1] = '+'
--X → s[1] = '-'
X-- → s[1] = '-'
```

## Approach

1. Read the number of statements `n`.
2. Initialize:

```cpp
int x = 0;
```

3. For each statement:

   * If `s[1]` is `'+'`, increment `x`.
   * Otherwise, decrement `x`.
4. Print the final value of `x`.

## Example

Input:

```text
3
X++
++X
X--
```

Execution:

```text
x = 0

X++ → x = 1
++X → x = 2
X-- → x = 1
```

Output:

```text
1
```

## Time Complexity

```text
O(n)
```

One pass through all statements.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

* Reading multiple string commands.
* Simulating operations step by step.
* Using character indexing in strings.
* Updating a variable based on command type.

## Functions and Concepts Used

### String Indexing

```cpp
s[1]
```

Accesses the middle character of the statement.

### Increment

```cpp
x++;
```

Increases the value of `x` by 1.

### Decrement

```cpp
x--;
```

Decreases the value of `x` by 1.

## Solution Idea

```text
Read Statement
       ↓
Check s[1]
       ↓
'+' ?
  ↓      ↓
Yes      No
 ↓        ↓
x++      x--
       ↓
Continue
       ↓
Print x
```
