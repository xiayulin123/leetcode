int numberOfSubarrays(int* nums, int numsSize, int k) {
    int left = 0;
    int left1 = 0;
    int count = 0;
    int count1 = 0;
    int ans = 0;
    for(int right = 0; right < numsSize; right++){
        if(nums[right] % 2){
            count++;
            count1++;
        }
        while(count >= k){
            if(nums[left] % 2){
                count--;
            }
            left++;
        }
        while(count1 >= k + 1){
            if(nums[left1] % 2){
                count1--;
            }
            left1++;
        }
        ans += left - left1;
    }
    return ans;
}
