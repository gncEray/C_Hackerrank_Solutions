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

int main()
{
    int matrix_rows, matrix_columns, r;
    int i, j, k;
    int a, b, min, mat;
    int maxone, maxtwo;

scanf("%d %d %d", &matrix_columns, &matrix_columns, &r);

int matrix[matrix_rows][matrix_columns];
int temp[matrix_rows][matrix_columns];

for(i=0; i<matrix_rows; i++){
    for(j=0; j<matrix_columns; j++){
        scanf("%d", &matrix[i][j]);
    }
}

for(i=0; i<matrix_rows; i++){
    for(j=0; j<matrix_columns; j++){
        a = i < matrix_rows - i ? i : matrix_rows - i;
        b = j < matrix_columns - j ? j : matrix_columns - j;
        min = a < b ? a : b;
        maxone = matrix_rows - min;
        maxtwo = matrix_columns - min;
        mat = 2*(maxone+maxtwo) - 4*min;
        
        int newrow = i;
        int newcol = j;
        
        for(k=0; k<r%mat; k++){
            if(newcol==min && newrow<maxone){
                newrow++;
            }
            else if(newrow==maxone && newcol<maxtwo){
                newcol++;
            }
            else if(newrow>min && newcol==maxtwo){
                newrow--;
            }
            else if(newrow==min && newcol>min){
                newcol--;
            } 
        }
        
        temp[newrow][newcol] = matrix[i][j];
    }
}

for(i=0; i<matrix_rows; i++){
    for(j=0; j<matrix_columns; j++){
    printf("%d ", temp[i][j]);
    }
    printf("\n");
}
    return 0;
}
