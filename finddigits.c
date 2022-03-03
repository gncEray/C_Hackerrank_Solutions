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

// Complete the findDigits function below.
int findDigits(int n) {
    int d, cnt = 0;
    int temp;
 
    scanf("%d", &n);
    
    temp = n;
    
    while(temp>0){
        d = temp % 10;
        if(d != 0){
            if(n % d == 0)
            cnt++;
            }
        temp = temp / 10;
    }
   
    return cnt;
}

int main()
{
    
  int n;
  int t, k;
  
        scanf("%d", &t);
         
		int result[t];
        
        for(k=0; k<t; k++){        
        result[k] = findDigits(n);
        }
        
		for(k=0; k<t; k++)
        
 		printf("%d\n", result);

    return 0;
}

int findDigits(int n) {

    int digits = n;
    int digit;
    int count = 0;
    

    do {
        digit = digits % 10;
        digits /= 10;
        if (digit != 0 && n % digit == 0) {
            ++count;
        }
    } while (digits > 0);
    
    return count;
}
