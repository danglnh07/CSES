# Missing number 

## Sumary

Given an integer `n` $(2 <= n <= 2.10^5)$ and `n - 1` integer between 1 and `n` (inclusively), find the missing number 

## Trick to solve

Basically, we have the following: 

`sum of all n - 1 number + missing number = sum of n number`

The sum of all `n` number can be calculate using the formula: $n(n + 1)/2$

## Analysis

Time complexity: $O(n)$
Space complexity: $O(1)$