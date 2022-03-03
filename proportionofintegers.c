#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the plusMinus function below.
void plusMinus(int arr_count, int* arr) 
{

int k;

float num_pos;
num_pos = 0.0;
float num_neg;
num_neg = 0.0;
float num_zer;
num_zer = 0.0;

scanf("%d", &arr_count);

for (k=0; k<arr_count; k++) 
{
scanf("%d", &arr[k]);
if (arr[k]>0)
num_pos = num_pos + 1;
else if (arr[k]<0)
num_neg = num_neg + 1;
else
num_zer = num_zer + 1;
}

double posprp;
posprp = num_pos / arr_count;
double negprp;
negprp = num_neg / arr_count;
double zerprp;
zerprp = num_zer / arr_count; 

printf("%8.6f\n%8.6f\n%8.6f", posprp, negprp, zerprp);

}

int main()
{
	int n, arrcount;
	int arr[arrcount];

    int arr_count = n;

    plusMinus(arr_count, arr);

    return 0;
}


