#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, int ar_count, int* ar) {

int i, j;
int sum = 0;
int cnt = 0;

scanf("%d %d", &n, &k);

for(i=0; i<n; i++)
scanf("%d", &ar[i]);
do{
for(i=1; i<n; i++){
    for(j=0; j<i; j++){
    sum = ar[i] + ar[j];
    if(sum % k == 0)
    cnt++;
    sum = 0;
}}
}while(i != j && ar[i]==ar[j]);


return cnt;
}

int main()
{
  	int n, k;
  	int ar[n];
    int ar_count = n;

    int result = divisibleSumPairs(n, k, ar_count, ar);

    printf("%d\n", result);


    return 0;
}


