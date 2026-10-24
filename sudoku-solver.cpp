// Used Google Gemini for the code :(

//
// Created by Baljit Panda on 24.10.2026.
//

// A sudoku solver in C++

#include <iostream>
using namespace std;

const int N = 9;

void displayGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

bool findUnassignedLocation(int grid[N][N], int &row, int &col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}

bool isValid(int grid[N][N], int row, int col, int number) {
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == number) {
            return false;
        }
    }

    for (int i = 0; i < N; i++) {
        if (grid[i][col] == number) {
            return false;
        }
    }

    int startRow = row - (row % 3);
    int startCol = col - (col % 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == number) {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int grid[N][N]) {
    int row, col;

    if (!findUnassignedLocation(grid, row, col)) {
        return true;
    }

    for (int number = 1; number <= 9; number++) {
        if (isValid(grid, row, col, number)) {
            grid[row][col] = number;

            if (solveSudoku(grid)) {
                return true;
            }

            grid[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int grid[N][N];

    cout << "Enter the Sudoku grid (Use 0 for empty cells):" << endl;
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cin >> grid[row][col];
        }
    }

    cout << endl;
    if (solveSudoku(grid)) {
        cout << "Solution:" << endl;
        displayGrid(grid);
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}
