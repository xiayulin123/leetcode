bool check(int* nums, int numsSize, int k, int val){
    int cnt = 0;
    int last = -2;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] <= val && (i - last) > 1){
            cnt++;
            last = i;
        }
    }
    return cnt >= k;
}
int minCapability(int* nums, int numsSize, int k) {
    int max = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    int min = 0;
    while(min + 1 < max){
        int mid = min + (max - min) / 2;
        if(check(nums, numsSize, k, mid)){
            max = mid;
        } else {
            min = mid;
        }
    }
    return max;
}
