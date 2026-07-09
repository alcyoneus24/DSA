# Codeforces #58A – Chat Room

## Difficulty
A

## Concepts
Strings, Subsequences, Two Pointers, Implementation

## Problem Summary

Vasya wants to say hello in a chat room.

He types a string `s`.

He successfully says hello if it is possible to delete some characters from `s` so that the remaining characters form:

```text
hello
```

The characters must appear in the same order, but they do not need to be adjacent.

Determine whether `"hello"` is a subsequence of the given string.

## Key Observation

We do not need the characters of `"hello"` to be consecutive.

We only need to find:

```text
h → e → l → l → o
```

in the correct order.

For example:

```text
ahhellllloou
```

contains:

```text
a h h e l l l l l o o u
  ↑   ↑ ↑ ↑     ↑
  h   e l l     o
```

Therefore the answer is:

```text
YES
```

## Approach

1. Store the target string:

```text
hello
```

2. Use a pointer `j` to track the current character of `"hello"` that we are looking for.
3. Traverse the input string:
   - If the current character matches `hello[j]`, increment `j`.
4. If all 5 characters of `"hello"` are found, print `YES`.
5. Otherwise, print `NO`.

## Example

### Input

```text
ahhellllloou
```

### Matching Process

```text
Looking for h ✓
Looking for e ✓
Looking for l ✓
Looking for l ✓
Looking for o ✓
```

All characters found in order.

### Output

```text
YES
```

---

### Input

```text
hlelo
```

### Matching Process

```text
h ✓
l ✗ (expected e)
e ✓
l ✓
o ✗ (second l missing)
```

Cannot form "hello".

### Output

```text
NO
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    string target = "hello";
    int j = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == target[j]){
            j++;
        }

        if(j == 5){
            break;
        }
    }

    if(j == 5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
```

## Time Complexity

```text
O(n)
```

We traverse the string once.

## Space Complexity

```text
O(1)
```

Only a few variables are used.

## What I Learned

- What a subsequence is.
- How to match characters in order without requiring adjacency.
- How to use a pointer to track progress through a target string.
- Many string problems can be solved with simple traversal.

## Pattern Recognition

When a problem asks:

- Can a word be formed by deleting characters?
- Do characters need to appear in order?
- Is one string a subsequence of another?

Think of the subsequence pattern:

```cpp
int j = 0;

for(int i = 0; i < s.length(); i++){
    if(s[i] == target[j]){
        j++;
    }
}
```

This technique is commonly used in string matching and two-pointer problems.