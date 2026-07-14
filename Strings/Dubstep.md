# Codeforces #208A – Dubstep

## Difficulty
A

## Concepts

- Strings
- Pattern Matching
- String Parsing
- Simulation

## Problem Summary

Vasya creates a dubstep remix by inserting the string `"WUB"` before, after, and between the words of an original song.

Given the remixed string, restore the original song by:

- Removing all occurrences of `"WUB"`
- Replacing groups of `"WUB"` with a single space
- Preserving the original word order

## Key Observation

The substring `"WUB"` acts as a separator between words.

For example:

```text
WUBWEWUBAREWUBTHE
```

represents:

```text
WE ARE THE
```

Multiple consecutive `"WUB"`s should still produce only one space:

```text
WUBWUBABCWUBWUBDEF
```

becomes:

```text
ABC DEF
```

Instead of deleting characters, it is easier to scan the string and treat every `"WUB"` as a delimiter.

## Approach

1. Traverse the string from left to right.
2. Whenever `"WUB"` is found:
   - Print a space only if the previous output wasn't already a space.
   - Skip the entire `"WUB"` substring.
3. Otherwise:
   - Print the current character.
   - Mark that the last output was not a space.

A boolean variable helps avoid printing multiple spaces for consecutive `"WUB"`s.

## Example

### Input

```text
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
```

### Processing

```text
WUB → skip
WE → print
WUB → space
ARE → print
WUBWUB → one space
THE → print
...
```

### Output

```text
WE ARE THE CHAMPIONS MY FRIEND
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    string s;
    bool spacePrinted = true;

    cin >> s;

    for(int i = 0; i < s.length(); i++){

        if(i + 2 < s.length() && s.substr(i, 3) == "WUB"){

            if(!spacePrinted){
                cout << " ";
                spacePrinted = true;
            }

            i += 2;
        }
        else{
            cout << s[i];
            spacePrinted = false;
        }
    }

    return 0;
}
```

## Time Complexity

```text
O(n)
```

Each character is processed at most once.

## Space Complexity

```text
O(1)
```

Only a few extra variables are used.

## What I Learned

- How to parse strings using a fixed pattern.
- How to use `substr()` for pattern matching.
- How to handle multiple consecutive delimiters.
- Why simulation is often simpler than repeatedly modifying a string.

## Pattern Recognition

When a problem asks you to:

- Restore text from encoded separators
- Replace repeated delimiters with a single separator
- Parse strings containing a fixed pattern

Think:

```text
String Parsing + Pattern Matching
```

A common strategy is:

```text
Detect pattern
→ Treat it as a separator
→ Build the output directly
```