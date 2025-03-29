# Repitiion 

## Sumary

Basically, the task is to find the longest substring of the same character in the given string 

Constraint: $1 <= n <= 10^6$

## Trick to solve

This is a basic two pointer problem. We have to pointer: `start` and `end`. Two pointer start at the start of the string, and the loop will terminate if `end` reach the end of the string. If the current character at `end` is equal to `start`, then we increase the length to 1, else we'll jump the `start` pointer to where the `end` pointer is located

## Analysis

Time complexity: $O(n)$ (The loop will terminate if `end` reach the end of the string, so it's $O(n)$ at most)

Space complexity: $O(1)$