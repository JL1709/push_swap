# push_swap

This repo provides the push_swap program that sorts data on two stacks with a limited set of instructions:
- sa : swap a - swap the first 2 elements at the top of stack a.
- sb : swap b - swap the first 2 elements at the top of stack b.
- ss : sa and sb at the same time.
- pa : push a - take the first element at the top of b and put it at the top of a.
- pb : push b - take the first element at the top of a and put it at the top of b.
- ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
- rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- rr : ra and rb at the same time.
- rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- rrr : rra and rrb at the same time

Tested on macOS Monterey.

## Installation

#### 1) Clone this repository 
```
git clone git@github.com:JL1709/push_swap.git
```

#### 2) Run Makfile
```
cd push_swap
make
```

#### 3)  Run program
```
$>./push_swap 2 1 3 6 5 8
```
