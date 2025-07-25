int cmp(const void* a, const void *b){
    return *(int *)a - *(int *)b;
}
int bound(int* nums, int index, int value, int numsSize){
    int left = index;
    int right = numsSize - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] <= value){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}
long long countFairPairs(int* nums, int numsSize, int lower, int upper) {
    long long ans = 0;
    qsort(nums, numsSize, sizeof(int), cmp);
    
    for(int i = 0; i < numsSize; i++){
        int l = bound(nums, i + 1, lower - nums[i] - 1, numsSize);
        int u = bound(nums, i + 1, upper - nums[i], numsSize);
        ans += u - l;
    }
    return ans;
}
