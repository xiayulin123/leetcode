long long countSubarrays(int* nums, int numsSize, long long k) {
    long long ans = 0;
    long long tmp = 0;
    int count = 1;
    int left = 0;
    long long add = 0;
    for(int right = 0; right < numsSize; right++){
        add += nums[right];
        while((add * count) >= k){
            add -= nums[left];
            count--;
            left++;
        }
        count++;
        ans += right - left + 1;

    }
    return ans;
}
