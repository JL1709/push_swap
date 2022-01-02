# push_swap

This repo provides the push_swap program that sorts data on two stacks with a limited set of instructions.  
Possible instructions:
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
git clone git@github.com:JL1709/pipex.git
```

#### 2) Run Makfile
```
cd pipex
make
```

#### 3)  Run program
```
$> ./pipex infile command1 command2 outfile
```
infile and outfile are file names, command1 and command2 are shell commands with their parameters.  
Works like the shell command: < infile command1 | command2 > outfile
  
For example:
```
$> ./pipex infile cat wc outfile
```
infile provided for testing (outfile gets created automatically during execution).

### pipex_bonus folder
Provides a pipex program that can handle:

#### 1) Multiple pipes
```
$> ./pipex infile command1 command2 command3 ... commandn outfile
```
Works like the shell command: < infile command1 | command2 | command3 | ... | commandn > outfile

#### 2) Here document (<<) and Append operator (>>)
```
$> ./pipex here_doc LIMITER command1 command2 file
```
For example:
```
./pipex here_doc EOF cat wc outfile
```
Works like the shell command: command1 << LIMITER | command2 >> outfile
