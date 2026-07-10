# LeetCode 49 – Group Anagrams

## Difficulty
Medium

## Concepts
Strings, Sorting, Hash Map, Grouping, Arrays

## Problem Summary

Given an array of strings, group together all strings that are anagrams of each other.

Two strings are anagrams if they contain exactly the same characters with the same frequencies, but possibly in a different order.

Return all groups of anagrams.

## Key Observation

Consider the words:

```text
eat
tea
ate
```

If we sort each word:

```text
eat -> aet
tea -> aet
ate -> aet
```

All three produce the same result.

Similarly:

```text
tan -> ant
nat -> ant
```

Since anagrams have identical sorted forms, the sorted string can be used as a unique identifier for a group.

## Approach

1. Create a hash map.
2. For each word:
   - Create a copy of the word.
   - Sort the copy.
   - Use the sorted word as the key.
   - Store the original word in the corresponding group.
3. Traverse the hash map and collect all groups into the final answer.

## Example

### Input

```text
["eat","tea","tan","ate","nat","bat"]
```

### Sorted Forms

```text
eat -> aet
tea -> aet
ate -> aet

tan -> ant
nat -> ant

bat -> abt
```

### Groups

```text
aet -> [eat, tea, ate]
ant -> [tan, nat]
abt -> [bat]
```

### Output

```text
[
  ["eat","tea","ate"],
  ["tan","nat"],
  ["bat"]
]
```

## Accepted Solution

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string s : strs){

            string key = s;
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }

        vector<vector<string>> result;

        for(auto &group : mp){
            result.push_back(group.second);
        }

        return result;
    }
};
```

## Time Complexity

Let:

```text
n = number of strings
k = average length of a string
```

Sorting one string:

```text
O(k log k)
```

For all strings:

```text
O(n × k log k)
```

## Space Complexity

```text
O(n × k)
```

The hash map stores all strings grouped by their sorted representation.

## What I Learned

- How to identify anagrams efficiently.
- How sorting can create a unique signature for a string.
- How to use `unordered_map` for grouping data.
- How to work with nested vectors.
- How hashing simplifies grouping problems.

## Pattern Recognition

When a problem asks you to:

- Group similar strings
- Detect anagrams
- Compare character compositions

Think:

```cpp
sort(word.begin(), word.end());
```

and use the result as a key in a hash map.

This is one of the most common patterns used in anagram-related interview questions.

## Alternative Approach

Instead of sorting, we can store the frequency of each character:

```text
a:1 b:0 c:0 ...
```

and use that frequency representation as the key.

This avoids sorting and can be more efficient for larger strings, but the sorting approach is simpler and commonly accepted in interviews and coding platforms.