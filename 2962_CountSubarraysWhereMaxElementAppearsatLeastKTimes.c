long long countSubarrays(int* nums, int numsSize, int k) {
    long long left = 0;
    long long ans = 0;
    int max[numsSize] = {};
    long long a = 0;
    long long num = 0;
    for(int right = 0; right < numsSize; right++){
        num = fmax(num, nums[right]);
    }

    for(int right = 0; right < numsSize; right++){
        if(nums[right] == num){
            a++;
        }
        while(a >= k){
            if(nums[left] == num){
                a--;
            }
            left++;
        }
        ans += left;

    }
    return ans;
}
