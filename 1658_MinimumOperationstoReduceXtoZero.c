int minOperations(int* nums, int numsSize, int x) {
    int left = 0;
    int tmp = 0;
    int ans = -1;
    int target = 0;

    for(int i = 0; i < numsSize; i++){
        target += nums[i];
    }
    target -= x;
    if(target < 0) return -1;
    if(target == 0) return numsSize;

    for(int right = 0; right < numsSize; right++){
        tmp += nums[right];
        while(tmp > target){
            tmp -= nums[left];
            left++;
        }
        if(tmp == target){
            ans = fmax(ans, right - left + 1);
        }

    }
    return ans == -1 ? ans : numsSize - ans;
}
