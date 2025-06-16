int subarraysWithKDistinct(int* nums, int numsSize, int k) {
    int left = 0;
    int left1 = 0;
    int diff = 0;
    int diff1 = 0;
    int ans = 0;
    int count[2*10000 + 1] = {0};
    int count1[2*10000 + 1] = {0};

    for(int right = 0; right < numsSize; right++){
        count[nums[right]]++;
        count1[nums[right]]++;

        if(count[nums[right]] == 1){
            diff++;
        }
        if(count1[nums[right]] == 1){
            diff1++;
        }
        while(diff >= k){
            if(count[nums[left]] == 1){
                diff--;
            }
            count[nums[left]]--;
            left++;
        }
        while(diff1 >= k+1){
            if(count1[nums[left1]] == 1){
                diff1--;
            }
            count1[nums[left1]]--;
            left1++;
        }
        ans += left - left1;
    }
    return ans;
}
