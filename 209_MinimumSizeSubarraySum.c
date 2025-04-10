int minSubArrayLen(int target, int* nums, int numsSize) {
    int ans = numsSize + 1;
    int l = 0;
    int tmp = 0;
    for(int i = 0; i < numsSize; i++){
        tmp += nums[i];
        while(tmp >= target){
            ans = fmin(ans, i - l + 1);
            tmp -= nums[l];
            l++;
        }
    }
    if(ans == numsSize + 1){
        return 0;
    }
    return ans;
}
