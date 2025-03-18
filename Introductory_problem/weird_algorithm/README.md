# Weird algorithm 

## Sumary

We read in a number $(1 <= n <= 10^6)$, if n is even, divide it by 2, if odd, then multiply by 3 and add 1 until 
n = 1

## Trick to solve

The algorithm is straight forward, but there is one small issue. Since the n can be divide by 2, but can also be multiply by
3, then it's possible for n to grow bigger than $10^6$, which may exceed the maximum value of `int`. So, we use `long long int` 
here instead to avoid number overflow