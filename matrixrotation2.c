#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int matrix_rows, matrix_columns, r;
    scanf("%d%d%d",&matrix_rows,&matrix_columns,&r);
    int matrix[matrix_rows][matrix_columns];
    int temp[matrix_rows][matrix_columns];
    for (int r = 0; r < matrix_rows; r++) {
        for (int c = 0; c < matrix_columns; c++) {
            scanf("%d", &matrix[r][c]);
        }
    }
    matrix_rows--;
    matrix_columns--;
    
    for (int r = 0; r <= matrix_rows; r++) {
        for (int c = 0; c <= matrix_columns; c++) {
            int x = r < matrix_rows - r ? r : matrix_rows - r;
            int y = c < matrix_columns - c ? c : matrix_columns - c;
            int min = x < y ? x : y;
            int maxRow = matrix_rows - min;
            int maxCol = matrix_columns - min;
            int mat = (maxRow + maxCol) * 2 - min * 4;

            int row = r;
            int col = c;
            for (int a = 0; a < r%mat; a++) {
                if (col == min && row < maxRow) {
                    row++;
                }
                else if (row == maxRow && col < maxCol) {
                    col++;
                }
                else if (row > min && col == maxCol) {
                    row--;
                }
                else if (row == min && col > min) {
                    col--;
                }
            }
            temp[row][col] = matrix[r][c];
        }
    }


    for (int r = 0; r <= matrix_rows; r++) {
        for (int c = 0; c <= matrix_columns; c++) {
            printf("%d ", temp[r][c]);
        }
        printf("\n");
    }


    return 0;
}

