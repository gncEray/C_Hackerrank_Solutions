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

void compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
	
    int k, as=0, bs=0;
    *result_count = 3;
        
    for(k=0; k<a_count; k++){
    scanf("%d", &a[k]);
	}
	
	for(k=0; k<a_count; k++){
    scanf("%d", &b[k]);
    if (a[k]>b[k]) 
    as++;
    else if (a[k]<b[k])
    bs++;
    }
    
}

int main()
{
	int a, b, i;
    int a_count = 3;
    
    int b_count = 3;

    int result_count;
    
    int* result = compareTriplets(a_count, a, b_count, b, &result_count);

    for (i = 0; i < result_count; i++) {
        printf("%d", *(result + i));

        if (i != result_count - 1) {
        printf(" ");
        }
    }
    return 0;
}

