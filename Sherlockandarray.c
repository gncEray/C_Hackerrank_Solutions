char* balancedSums(int arr_count, int* arr) {
int i, k;
int suma, sumb;
i = 0;
k = arr_count-1;

suma = arr[i];
sumb = arr[k];

while(i!=k){

/*here was my solution differently while was while(n<arr_count) and there is n++ in end of the while
and in my solution if return yes was in the while

for(i=0; i<n; i++)
suma += arr[i];
for(k=n+1; k<arr_count; k++)
sumb += arr[k];

*/

if(suma<sumb){
i++;
suma += arr[i];
}
else {
k--;
sumb += arr[k]; 
}

}
if(suma == sumb)
return "YES";

return "NO";
}
