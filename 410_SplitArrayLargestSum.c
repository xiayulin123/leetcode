int splitArray(int* nums, int numsSize, int k) {
    int max = 0;
    int sum = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max){
            max = nums[i];
        }
        sum += nums[i];
    }
    while(max <= sum){
        int mid = max + (sum - max) / 2;
        int cnt = 1;
        int tmp = 0;
        bool ok = true;
        for(int i = 0; i < numsSize; i++){  
            if(tmp + nums[i] <= mid){
                tmp += nums[i];
                continue;
            }
            if(cnt >= k) {
                ok = false;
                break;
            }
            cnt++;
            tmp = nums[i];    
        }
        if(ok){
            sum = mid - 1;
        } else {
            max = mid + 1;
        }
    }
    return max;
}
