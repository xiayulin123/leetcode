int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int ans = 0;
    int tmp = 0;
    for(int i = 0; i < arrSize; i++){
        tmp += arr[i];
        if(i < k - 1){
            continue;
        }
        if((tmp / k) >= threshold){
            ans++;
        }
        int out = arr[i-k+1];
        tmp -= out;
    }
    return ans;
}
