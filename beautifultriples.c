int beautifulTriplets(int d, int arr_count, int* arr) {
int i, j, k, f;
int cnt = 0;
scanf("%d %d", &arr_count, &d);
k = arr_count-1;

for(i=0; i<arr_count; i++)
scanf("%d", &arr[i]);

for(i=k; i>0; i--){
    for(j=k-1; j>=0; j--){
        if(arr[i]-arr[j] == d){
            for(f=j-1; f>=0; f--){
                if(arr[j]-arr[f] == d){
                cnt++;
                }
            }
        }
    }
}

return cnt;
}
