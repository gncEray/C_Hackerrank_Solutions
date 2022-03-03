#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char encryption(char s) {
int i, cnt = 0;
cnt = strlen(s);
int col = sqrt(cnt) + 1;
int row;
int j;

if(col*(col-1)<cnt){
row = col;
}
else{
row = col - 1;
}
 	
char temp[row][col];
int x = 0;

for(i=0; i<row; i++){
    for(j = 0; j<col; j++)
    temp[i][j] = ' ';
}

for(i=0; i<row; i++){
    for(j = 0; j<col; j++)
    temp[i][j] = s[x++];
}

x = 0;
for(j=0; j<col; j++){
    for(i=0; i<row; i++)
    s[x++] = temp[i][j];
    
    s[x++] = ' ';
}

return s;
}


int main()
{

    char s;
    
    scanf("%s", &s);

    char result = encryption(s);

   

    return 0;
}
