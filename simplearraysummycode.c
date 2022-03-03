#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int simpleArraySum(int ar_count, int* ar, int size) 
{
     int k;
     ar_count = 0;
     
     scanf("%d", &size);
     
     for(k=0; k<size; k++)
     scanf("%d", &ar[k]);
     
     for(k=0; k<size; k++)
     ar_count = ar_count + ar[k];
     
     
    return ar_count;
}

int main()
{
   	int size;
    int ar[size];
	int ar_count;
    
    int result = simpleArraySum(ar_count, ar, size);

    printf("%d\n", result);


    return 0;
}
