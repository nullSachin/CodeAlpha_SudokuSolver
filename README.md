# Sudoku Solver

## Overview

The Sudoku Solver is a C++ application that solves a 9×9 Sudoku puzzle using the Backtracking Algorithm. The program fills empty cells while ensuring that Sudoku rules are followed:

* Each row contains numbers 1–9 without repetition.
* Each column contains numbers 1–9 without repetition.
* Each 3×3 subgrid contains numbers 1–9 without repetition.

The solver automatically finds a valid solution if one exists.

## Features

* Solves standard 9×9 Sudoku puzzles.
* Uses the Backtracking Algorithm.
* Validates rows, columns, and 3×3 subgrids.
* Displays both the original and solved puzzle.
* Handles puzzles with a valid solution.

## Technologies Used

* C++
* Recursion
* Backtracking
* 2D Arrays
* Functions

## Algorithm

1. Find an empty cell.
2. Try numbers from 1 to 9.
3. Check whether the number is valid in the current position.
4. Place the number and recursively solve the remaining puzzle.
5. If a dead end is reached, backtrack and try another number.
6. Continue until the puzzle is solved.

## Project Structure

```text
Sudoku-Solver/
│
├── sudoku_solver.cpp
└── README.md
```

## How to Compile and Run

### Compile

```bash
g++ sudoku_solver.cpp -o sudoku_solver
```

### Run

```bash
./sudoku_solver
```

## Sample Input

```text
3 0 6 5 0 8 4 0 0
5 2 0 0 0 0 0 0 0
0 8 7 0 0 0 0 3 1
0 0 3 0 1 0 0 8 0
9 0 0 8 6 3 0 0 5
0 5 0 0 9 0 6 0 0
1 3 0 0 0 0 2 5 0
0 0 0 0 0 0 0 7 4
0 0 5 2 0 6 3 0 0
```

## Sample Output

```text
Solved Sudoku:

3 1 6 5 7 8 4 9 2
5 2 9 1 3 4 7 6 8
4 8 7 6 2 9 5 3 1
2 6 3 4 1 5 9 8 7
9 7 4 8 6 3 1 2 5
8 5 1 7 9 2 6 4 3
1 3 8 9 4 7 2 5 6
6 9 2 3 5 1 8 7 4
7 4 5 2 8 6 3 1 9
```

## Time Complexity

* Worst Case: O(9^(n²))
* Practical Performance: Much faster due to constraint checking and pruning.

## Concepts Demonstrated

* Backtracking
* Recursion
* Constraint Satisfaction Problems (CSP)
* Matrix Operations
* Algorithm Design

## Future Enhancements

* User-input Sudoku puzzles.
* Graphical User Interface (GUI).
* Support for different Sudoku sizes.
* Faster solving techniques and heuristics.
* Puzzle generator functionality.

## Learning Outcomes

This project helps in understanding:

* Recursive problem-solving
* Backtracking algorithms
* Constraint checking
* Search-space optimization
* Matrix manipulation in C++

## Author

Sachin Kumar
CodeAlpha C++ Programming Internship
