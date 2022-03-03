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

int birthdayCakeCandles(int candles_count, int* candles) {
int n;
int i;

scanf("%d", &candles_count);

for(i=0; i<candles_count; i++)
scanf("%d", &candles[i]);

int max = candles[0];
n = 0;

for(i=0; i<candles_count; i++){
if(candles[i] >= max){
max = candles[i];
n++;
}
}

return n;
}

int main()
{  

    int candles_count;

    int* candles;

    int result = birthdayCakeCandles(candles_count, candles);

    printf("%d\n", result);


    return 0;
}


