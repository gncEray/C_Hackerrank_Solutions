#define size 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int camelcase(char* s) {
int k, length;
int count = 1;

for(k=0; k<length; k++){
	scanf("%c", &s[k]);
if(s[k]>='A' && s[k]<='Z')
count++;
}

return count;
}


int main()
{
    int k;
    int s[size];
    
    for(k=0; k<size; k++){
    	scanf("%c", &s[k]);
	}

    int result = camelcase(s);

    printf("%d\n", result);

    return 0;
}
