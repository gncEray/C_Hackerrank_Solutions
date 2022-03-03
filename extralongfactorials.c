#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
int k;
double fact = 1;

scanf("%d", &n);

for(k=1; k<=n; k++)
fact = fact * k;

printf("%.f", fact);
}

int main()
{
    int n;
    extraLongFactorials(n);

    return 0;
}


