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
/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, char* path) {
int k, sum = 0;
int valleys;
scanf("%d", &steps);

for(k=0; k<steps; k++){
    scanf("%c", &path[k]);
    if(path[k]=='U'){
        if(++sum==0)
        valleys++;
    }
    else {
    sum = sum -1;
    }
}

return valleys;
}

int main()
{
    
    int result = countingValleys(steps, path);

    printf(fptr, "%d\n", result);


    return 0;
}

