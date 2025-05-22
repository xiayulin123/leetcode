int minSizeSubarray(int* nums, int numsSize, int target) {
    int ans = INT_MAX;
    int left = 0;
    int sum = 0;
    long long subtotal = 0;
    long long steps = 0;
    for(long long i = 0; i < numsSize; i++){
        subtotal += nums[i];
    }
    for(;target > subtotal;){
        steps += numsSize;
        target -= subtotal;
    }
    for(int right = 0; right < numsSize * 2; right++){
        sum += nums[right % numsSize];
        while(sum > target){
            sum -= nums[left % numsSize];
            left++;
        }
        if(sum == target){
            ans = fmin(ans, right - left + 1);
            printf("HERE s");
        }
    }
    return ans == INT_MAX ? -1 : ans + steps;
}
