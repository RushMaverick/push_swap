
# push_swap

[![rrask's 42 push_swap Score](https://badge42.vercel.app/api/v2/cli75ikcb001108l5swd79yy2/project/3089356)](https://github.com/JaeSeoKim/badge42)


This project aims to increase one's knowledge of complexity in programming. Push_swap figures out what are the optimal moves to get any number of digits sorted. This is done through an implementation of the radix sort algorithm and pre-sorting.

Radix sort sorts the numbers based on their binary representation from right to left. The algorithm repeatedly performs operations on the stack until the numbers are sorted. The code includes functions for stack manipulation.
Keep in mind this is but one of many algorithms, and might not be the optimal solution for getting the right set of instructions. 


## Links

[Radix Sorting](https://en.wikipedia.org/wiki/Radix_sort)

[push_swap explanation in detail (Props to Leo Fu)](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)

[push_swap_visualizer](https://github.com/o-reo/push_swap_visualizer)



## Run Locally

Clone the project

```bash
  git clone https://github.com/RushMaverick/push_swap.git
```

Go to the project directory

```bash
  cd push_swap
```

Make the program

```bash
  make
```

Run the program

```bash
  ./push_swap 23 42 12 4 -2
```
You can input any numbers you want. If there are duplicates (two 2's for example.) it will say error. 

The output will be what moves are required to sort the given numbers.


## Moves

The following are the moves that were allowed for moving things within the stack.

| Move | Functionality     |
| :-------- | :------- |
| `Swap` | `Swaps the two first elements of the given stack.`

| Move | Functionality     |
| :-------- | :------- |
| `Push` | `Pushes the first element of the given stack to the top of the other given stack.`

| Move | Functionality     |
| :-------- | :------- |
| `Rotate` | `Rotates the top of the given stack to the stack's bottom.`

| Move | Functionality     |
| :-------- | :------- |
| `Reverse Rotate` | `Rotates the bottom of the given stack to the stack's top.`

| Move | Functionality     |
| :-------- | :------- |
| `Rotate Both` | `Performs rotate on both stacks.`

| Move | Functionality     |
| :-------- | :------- |
| `Swap Both` | `Performs swap on both stacks.`


