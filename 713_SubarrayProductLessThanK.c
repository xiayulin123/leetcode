int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    int left = 0;
    int ans = 0;
    int tmp = 1;
    for(int right = 0; right < numsSize; right++){
        tmp *= nums[right];
        while(tmp >= k && left < right){
            tmp = tmp / nums[left];
            left++;
        }
        if(tmp < k){
            ans += right - left + 1;

        }

        
    }
    return ans;
}
