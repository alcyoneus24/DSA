# Codeforces #131A – cAPS lOCK

## Difficulty
A

## Concepts
Strings, Character Manipulation, Case Conversion, Implementation

## Problem Summary

A word is considered to have been typed with Caps Lock accidentally enabled if:

1. All letters are uppercase.
2. All letters except the first are uppercase.

If either condition is satisfied, change the case of every letter in the word.

Otherwise, leave the word unchanged.

## Key Observation

We only need to check whether all characters from index `1` to the end are uppercase.

If they are:

- `HTTP` becomes `http`
- `cAPS` becomes `Caps`

Otherwise:

- `Lock` remains `Lock`

This single condition covers both cases described in the problem.

## Approach

1. Read the string.
2. Check if every character except the first is uppercase.
3. If true:
   - Toggle the case of every character.
4. Otherwise:
   - Print the original string.

## Example

### Input

```text
cAPS
```

### Analysis

```text
Characters after the first:
A P S

All are uppercase ✓
```

Toggle every character:

```text
c -> C
A -> a
P -> p
S -> s
```

Result:

```text
Caps
```

### Output

```text
Caps
```

---

### Input

```text
Lock
```

### Analysis

```text
Characters after the first:
o c k

Not all uppercase ✗
```

Leave unchanged.

### Output

```text
Lock
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool caps = true;

    for(int i = 1; i < s.length(); i++){
        if(islower(s[i])){
            caps = false;
            break;
        }
    }

    if(caps){
        for(int i = 0; i < s.length(); i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s << endl;

    return 0;
}
```

## Time Complexity

```text
O(n)
```

We traverse the string at most twice.

## Space Complexity

```text
O(1)
```

Only a few extra variables are used.

## What I Learned

- How to use `islower()`, `isupper()`, `tolower()`, and `toupper()`.
- How to validate a condition on part of a string.
- How to toggle the case of characters.
- How a simple observation can avoid complicated logic.

## Pattern Recognition

When a problem asks you to transform a string only under certain conditions:

1. First validate the condition.
2. Perform the transformation only if the condition is satisfied.

This pattern appears frequently in string implementation problems on Codeforces.