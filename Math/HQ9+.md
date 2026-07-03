# Codeforces #133A – HQ9+

## Difficulty
A

## Concepts
Strings, Character Traversal, Simulation, Implementation

## Problem Summary

HQ9+ is a joke programming language with four commands:

- H → prints "Hello, World!"
- Q → prints the source code
- 9 → prints the lyrics of "99 Bottles of Beer"
- + → increments an accumulator

Only H, Q, and 9 produce output.

The task is to determine whether the given program will produce any output when executed.

## Key Observation

If the string contains at least one of:

- H
- Q
- 9

then the program produces output.

Otherwise, it does not.

## Approach

1. Read the input string.
2. Traverse every character.
3. If any character is `H`, `Q`, or `9`, print `YES`.
4. If the loop finishes without finding any of them, print `NO`.

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
```

## Time Complexity

O(n)

## Space Complexity

O(1)

## What I Learned

- String traversal
- Checking multiple conditions with `||`
- Early termination using `return`
- Simplifying a simulation problem into a character search

## Pattern Recognition

When a problem asks whether an input contains any special character, keyword, or trigger condition, a simple linear scan is often sufficient.