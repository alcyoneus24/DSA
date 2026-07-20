# Codeforces #520A – Pangram

## Difficulty

A

## Concepts

- Strings
- Character Arrays
- Case Conversion
- Frequency Counting
- Implementation

## Problem Summary

You are given a string containing uppercase and lowercase English letters.

Determine whether the string is a **pangram**, i.e., whether it contains every letter from **'a' to 'z'** at least once, regardless of case.

Print:

- `YES` if it is a pangram.
- `NO` otherwise.

## Key Observation

A pangram must contain all **26 English letters**.

Since uppercase and lowercase letters are considered the same, convert every character to lowercase before processing.

Use a frequency array (or boolean array) of size `26` to mark which letters have appeared.

If all 26 letters are present, the answer is `YES`; otherwise, it is `NO`.

## Approach

1. Read the length of the string.
2. Read the string.
3. Convert each character to lowercase.
4. Mark the corresponding position in a boolean/frequency array.
5. Count how many different letters are present.
6. If the count is `26`, print `YES`; otherwise, print `NO`.

## Example

### Input

```text
35
TheQuickBrownFoxJumpsOverTheLazyDog
```

### Processing

After converting to lowercase:

```text
thequickbrownfoxjumpsoverthelazydog
```

All letters from `a` to `z` appear at least once.

### Output

```text
YES
```

## Accepted Solution

```cpp
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    bool present[26] = {false};

    for(char ch : s) {
        ch = tolower(ch);
        present[ch - 'a'] = true;
    }

    for(int i = 0; i < 26; i++) {
        if(!present[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
```

## Time Complexity

```text
O(n)
```

The string is traversed once, followed by checking 26 letters.

## Space Complexity

```text
O(1)
```

The frequency array has a fixed size of 26.

## What I Learned

- How to ignore letter case using `tolower()`.
- How to use a boolean array for tracking unique characters.
- How to map letters to array indices using `'a'`.
- How frequency counting helps solve character-related problems efficiently.

## Pattern Recognition

When a problem asks you to:

- Check whether every character appears
- Count distinct letters
- Ignore uppercase/lowercase differences

Think:

```text
Frequency Array + Case Conversion
```

A common implementation pattern is:

```cpp
bool present[26] = {false};

for(char ch : s) {
    ch = tolower(ch);
    present[ch - 'a'] = true;
}
```

Then verify whether every index has been marked.

## Alternative Thought Process

Instead of checking each alphabet letter individually inside the string, maintain a record of the letters you've already seen.

For every character:

```text
Convert to lowercase
↓

Mark its position in the array
↓

Continue scanning
```

After processing the entire string, if all 26 positions are marked, the string is a pangram.