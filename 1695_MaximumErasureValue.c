int maximumUniqueSubarray(int* nums, int numsSize) {
    int ans = 0;
    int left = 0;
    int right = 0;
    int sum = 0;
    int arr[10001] = {0};
    while(right < numsSize){
        sum += nums[right];
        arr[nums[right]]++;

        while(arr[nums[right]] > 1){
            arr[nums[left]]--;
            sum -= nums[left];
            left++;
        }

        right++;
        ans = fmax(ans, sum);

    }
    return ans;
}
