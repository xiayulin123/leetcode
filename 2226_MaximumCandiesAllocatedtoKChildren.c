
int maximumCandies(int* candies, int candiesSize, long long k) {
    int ans = 0;
    long long left = 1;
    long long right = 0;
    for(int i = 0; i < candiesSize; i++){
        right += candies[i];
    }
    if(right < k){
        return 0;
    }

    while(left <= right){
        long long mid = left + (right - left) / 2;
        long long tmp = 0;
        for(int i = 0; i < candiesSize; i++){
            tmp += candies[i] / mid;
        }
        if(tmp >= k){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return right;
}
