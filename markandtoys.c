#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the maximumToys function below.
int maximumToys(int prices_count, int* prices, int k) {
//prices_count = n
int i, j, toys, temp, man, sum;
scanf("%d %d", &prices_count, &k);

for(i=0; i<prices_count; i++)
scanf("%d", &prices[i]);

temp = prices[0];

for(i=0; i<prices_count; i++){
if(prices[i]<temp)
temp = prices[i];
}

sum = 0;
toys = 0;


sum += temp;
toys++;

while(sum<k){
man = prices[0];
for(i=0; i<prices_count; i++){
	if(prices[i]>temp && prices[i]<man)
		man = prices[i];
}

temp = man;
sum += temp;
toys++;
}


return (toys);
}

int main()
{

    int prices_count, k;
    int prices[prices_count];

    int result = maximumToys(prices_count, prices, k);

    printf("%d\n", result);


    return 0;
}

