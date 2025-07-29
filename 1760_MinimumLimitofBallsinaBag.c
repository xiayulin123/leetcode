bool check(int* nums, int numsSize, int max, long long divider){
    long long tmp = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] <= divider){
            continue;
        } else {
            tmp += (nums[i] + divider - 1) / divider - 1;
        }
    }
    return tmp <= max;
}
int minimumSize(int* nums, int numsSize, int maxOperations) {
    long long right = 0;
    long long left = 0;
    for(int i = 0; i < numsSize; i++){
        right += nums[i];

    }
    while(left + 1 < right){
        long long mid = left + (right - left) / 2;
        if(check(nums, numsSize, maxOperations, mid)){
            right = mid;
        } else {
            left = mid;
        }
    }
    return right;
}
