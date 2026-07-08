# LeetCode 203 – Remove Linked List Elements

## Difficulty
Easy

## Concepts
Linked List, Pointer Manipulation, Dummy Node, Traversal

## Problem Summary

Given the head of a linked list and an integer `val`, remove all nodes whose value is equal to `val`.

Return the head of the modified linked list.

## Key Observation

The node to be removed can appear:

- At the beginning of the list
- In the middle of the list
- At the end of the list
- Multiple times consecutively

Removing the head node requires special handling. To avoid this, we use a **dummy node** before the head.

## Approach

1. Create a dummy node and connect it to the head.
2. Use a pointer `curr` starting at the dummy node.
3. Traverse the list:
   - If `curr->next->val == val`, remove that node by skipping it.
   - Otherwise, move `curr` forward.
4. Return `dummy->next`.

## Example

### Input

```text
head = [1,2,6,3,4,5,6]
val = 6
```

### Traversal

```text
1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6

Remove first 6

1 -> 2 -> 3 -> 4 -> 5 -> 6

Remove second 6

1 -> 2 -> 3 -> 4 -> 5
```

### Output

```text
[1,2,3,4,5]
```

## Accepted Solution

```cpp
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;

        while(curr->next != nullptr){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};
```

## Time Complexity

```text
O(n)
```

Each node is visited at most once.

## Space Complexity

```text
O(1)
```

Only a few pointers are used.

## What I Learned

- How to delete nodes from a linked list.
- Why deleting the head node can be tricky.
- How a dummy node simplifies linked list problems.
- How to skip a node using pointer manipulation.

## Pattern Recognition

When a linked list problem involves:

- Deleting nodes
- Modifying the head
- Consecutive deletions

Use a dummy node:

```cpp
ListNode* dummy = new ListNode(0);
dummy->next = head;
```

This eliminates special cases and makes the code cleaner and easier to maintain.

## Alternative Approach

You can also repeatedly remove matching head nodes first and then process the remaining list.

However, the dummy node approach is preferred because it handles all cases uniformly and is commonly used in interview and LeetCode problems.