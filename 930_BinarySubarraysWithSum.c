int numSubarraysWithSum(int* nums, int numsSize, int goal) {
    int left = 0;
    int left1 = 0; 
    int tmp = 0;
    int tmp1 = 0;
    int ans = 0;
    for(int right = 0; right < numsSize; right++){
        tmp += nums[right];
        while(left <= right && tmp >= goal){
            tmp -= nums[left];
            left++;
        }
        tmp1 += nums[right];
        while(left1 <= right && tmp1 >= goal + 1){
            tmp1 -= nums[left1];
            left1++;
        }

        ans += left - left1;
    }
    return ans;
}
