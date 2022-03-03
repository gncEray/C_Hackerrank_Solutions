#include <stdio.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i, j, n, difference;
    int r,c, totalsum;
    int suml = 0;
    int sumr = 0;
    
    for(i=0; i<arr_rows; i++){
        suml += arr[i][i];
    }
    
    for(i=0; i<arr_columns; i++){
        for(j=arr_columns-1; j>=0; j--){
        if(i+j==arr_columns-1)
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

