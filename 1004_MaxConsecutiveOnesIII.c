int longestOnes(int* nums, int numsSize, int k) {
    int cnt0 = 0;
    int left = 0;
    int ans = 0;
    for(int right = 0; right < numsSize; right++){
        cnt0 += 1 - nums[right];
        while(cnt0 > k){
            cnt0 -= 1 - nums[left];
            left++;
        }
        ans = fmax(ans, right - left + 1);
    }
    return ans;
}
