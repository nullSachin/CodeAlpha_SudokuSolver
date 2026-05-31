#include <iostream>
using namespace std;

const int SIZE = 9;

// Check if a number can be placed at grid[row][col]
bool isSafe(int grid[SIZE][SIZE], int row, int col, int num) {

    // Check row
    for (int x = 0; x < SIZE; x++) {
        if (grid[row][x] == num)
            return false;
    }

    // Check column
    for (int x = 0; x < SIZE; x++) {
        if (grid[x][col] == num)
            return false;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

// Solve Sudoku using backtracking
bool solveSudoku(int grid[SIZE][SIZE]) {

    int row = -1, col = -1;
    bool emptyFound = false;

    // Find an empty cell
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                emptyFound = true;
                break;
            }
        }
        if (emptyFound)
            break;
    }

    // No empty cell means solved
    if (!emptyFound)
        return true;

    // Try numbers 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {

            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            // Backtrack
            grid[row][col] = 0;
        }
    }

    return false;
}

// Print Sudoku grid
void printGrid(int grid[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int grid[SIZE][SIZE] = {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    cout << "Original Sudoku:\n";
    printGrid(grid);

    if (solveSudoku(grid)) {
        cout << "\nSolved Sudoku:\n";
        printGrid(grid);
    } else {
        cout << "\nNo solution exists.\n";
    }

    return 0;
}