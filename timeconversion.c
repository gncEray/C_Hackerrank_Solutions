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


int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i, j, n, difference;
    int r,c, totalsum;
    int suml = 0;
    int sumr = 0;
    
    scanf("%d", &n);

    
    for(r=0; r<n; r++){
        for (c=0; c<n; c++) 
        scanf("%d", &arr[r][c]);
    }
    
    for(i=0; i<n; i++){
        suml += arr[i][i];
    }
    
    for(i=0; i<n; i++){
        for(j=n-1; j>=0; j--){
        if(i+j==n-1)
        sumr += arr[i][j];
        }}
        
        difference = abs(suml - sumr);

return difference;
}


int main()
{

    int n, arr;

    int result = diagonalDifference(n, n, arr);

    printf("%d\n", result);

    return 0;
}

