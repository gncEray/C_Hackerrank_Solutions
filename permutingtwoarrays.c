#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
int cnt=0;
int n, i, j, q;
scanf("%d %d", &n, &k);
A_count = n;
B_count = n;



for(i=0; i<n; i++)
scanf("%d", &A[i]);

for(i=0; i<n; i++)
scanf("%d", &B[i]);


for(i=0; i<A_count; i++){
    for(j=0; j<B_count; j++){
    if((A[i]+B[j]) >= k)
    cnt++;
    }
}
cnt = cnt / 2;
char* str;
if(cnt>=3)
str = "YES";
else
str = "NO";

return str;
}

int main()
{
        int A_count, k;
        int B_count;
        int A[A_count], B[B_count];
        
        int q;
		scanf("%d", &q);
		while(q>0){
        char* result = twoArrays(k, A_count, A, B_count, B);
        printf("%s\n", result);
        q--;
		}
    return 0;
}
