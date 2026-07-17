# Codeforces #271A – Beautiful Year

## Difficulty

A

## Concepts

- Mathematics
- Digits
- Brute Force
- Implementation

## Problem Summary

A year is called **beautiful** if all of its digits are distinct.

Given a year `y`, find the smallest year that is strictly greater than `y` and has all distinct digits.

It is guaranteed that such a year exists.

## Key Observation

The range of possible years is very small:

```text
1000 ≤ y ≤ 9000
```

So instead of trying to find a clever mathematical formula, we can simply check each year one by one until we find a beautiful year.

For each candidate year:

1. Extract its four digits.
2. Check whether all digits are different.
3. If they are, print the year and stop.

## Approach

1. Start from the given year.
2. Increment the year by one.
3. Extract all four digits:
   - Units digit
   - Tens digit
   - Hundreds digit
   - Thousands digit
4. Check if every pair of digits is different.
5. If yes:
   - Print the year.
   - Terminate the program.
6. Otherwise, continue searching.

## Example

### Input

```text
1987
```

### Processing

```text
1988 → Not Beautiful
1989 → Not Beautiful
1990 → Not Beautiful
...
2013 → Beautiful
```

### Output

```text
2013
```

---

### Input

```text
2013
```

### Processing

```text
2014 → Beautiful
```

### Output

```text
2014
```

## Accepted Solution

```cpp
#include<iostream>
using namespace std;

int main(){
    int y;
    int a,b,c,d;

    cin >> y;

    int year = y;

    while(true){

        year++;

        a = year % 10;
        b = (year / 10) % 10;
        c = (year / 100) % 10;
        d = (year / 1000) % 10;

        if(a != b && a != c && a != d &&
           b != c && b != d &&
           c != d){

            cout << year;
            break;
        }
    }

    return 0;
}
```

## Time Complexity

```text
O(1)
```

At most a few thousand years are checked, which is effectively constant for the given constraints.

## Space Complexity

```text
O(1)
```

Only a few integer variables are used.

## What I Learned

- How to extract individual digits from a number.
- How to compare multiple digits for uniqueness.
- How brute force can be efficient when the search space is small.
- How to repeatedly test candidates until a valid answer is found.

## Pattern Recognition

When a problem asks:

- Find the next valid number
- Check uniqueness of digits
- Search through a small range

Think:

```text
Brute Force + Digit Manipulation
```

Common pattern:

```cpp
while(true){

    candidate++;

    if(valid(candidate)){
        print answer;
        break;
    }
}
```

This pattern frequently appears in beginner Codeforces implementation problems.

## Alternative Solution

Convert the year to a string:

```cpp
string s = to_string(year);
```

Then check:

```cpp
s[0], s[1], s[2], s[3]
```

for uniqueness.

However, digit extraction using `%` and `/` is simpler and avoids extra string operations.